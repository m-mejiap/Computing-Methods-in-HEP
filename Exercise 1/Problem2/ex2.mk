main.pdf: main.tex ref.bib
	pdflatex main.tex
	python Plots_hw2.py