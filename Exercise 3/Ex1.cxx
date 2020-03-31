void Ex1(){
	int N = 1000;
	TRandom random;
	TFile hfile("file.root","RECREATE");
	TTree *t1 = new TTree("tree","random numbers");
	Float_t r;
	t1->Branch("r", &r);
	for(int i=0; i<N; i++){
		r = random.Gaus(0,1);
		t1->Fill();	
		hfile.Write();
	}
	hfile.Close();
}
