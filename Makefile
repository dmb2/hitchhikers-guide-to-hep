# Modified from https://stackoverflow.com/questions/22072773/batch-export-of-org-mode-files-from-the-command-line
#edit this if you want the html put somewhere else
OUT_DIR=$(PWD)

#Shouldn't need to edit anything below this line
HTML_FILES=$(patsubst %.org,$(OUT_DIR)/%.html,$(wildcard *.org))
PDF_FILES=$(patsubst %.org,$(OUT_DIR)/%.pdf,$(wildcard *.org))

.PHONY: all html pdf clean

all: pdf html
pdf: $(PDF_FILES)
html: $(HTML_FILES)

%.html: %.org
	emacs $< --batch -f org-export-as-html --kill

%.pdf: %.org
	emacs $< --batch -f org-export-as-pdf --kill

install: pdf html
	cp index.org ${HOME}/public/the-guide/the-guide.org
	cp index.pdf ${HOME}/public/the-guide/the-guide.pdf


clean:
	rm *.html *.pdf
