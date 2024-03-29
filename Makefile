FILES = .bash_aliases \
	.bash_functions.sh \
	.bash_PS1 \
	.bashrc \
	.profile \
	.vim\
	.vimrc \
	.zshrc

OBJS = ~/.bash_aliases \
	~/.bash_functions.sh \
	~/.bash_PS1 \
	~/.bashrc \
	~/.profile \
	~/.vim\
	~/.vimrc \
	~/.zshrc

all : copy
	. ~/.bashrc
copy :
	cp -rf $(FILES) ~/.
clean :
	rm -rf $(OBJS)
delgit :
	rm -rf ../.profil
fclean : clean delgit
