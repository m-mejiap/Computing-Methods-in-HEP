void Ex2(){
	TFile *f = new TFile("file.root");
	TTree *t1 = (TTree*)f->Get("tree");
	
	Float_t r;
	t1->SetBranchAddress("r",&r);

	int entries = t1->GetEntries();
	for (int i = 0; i < entries; i++){
    		t1->GetEntry(i);
	}

	TH1F* n = new TH1F("Histogram","Random numbers.",100,-3,3);
	t1->Draw("r>>Histogram");
	n->SetFillColor(5); 
	n->SetLineWidth(1);
	n->SetLineStyle(0);
	n->GetXaxis()->SetTitle("x axis");
	n->GetYaxis()->SetTitle("y axis");
	n->Fit("gaus");
}
