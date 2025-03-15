steps to follow if you have local repo ready and need to connect it to newly creatd git-repo

echo "# Arduino_tries" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin git@github.com:amitrajpurkar/Arduino_tries.git
git push -u origin main
