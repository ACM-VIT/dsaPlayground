1. Install git and setup
Install git in your PC and configure it

2. Fork this repo.
This creates a repository under your github account with the same configuration

3. Clone the forked repo
Use the command `git clone https://github.com/{your-username}/dsaPlayground`
This will make a local copy of the forked repository in your PC

4. Make a branch for yourself
`git branch {name of branch}`
It is advised to give the branch name which reflects the changes to be made in it

5. Make the desired changes in local copy of the cloned repository

6. Stage the made changes
Use the command `git add .`
This will stage all changes you have made so far in the local directory.

7. Commit your staged changes
`git commit -m "{give here a commit message which explains the changes you have made}"`

8. Push your changes
Use the command: `git push -u origin {branch-name}`
This will push your changes on your remote repo(forked one)

9. Make a pull request from the forked repository to the [parent repository](https://github.com/acm-vit/dsaPlayground)
Follow the github UI for this process.
Just make sure that the pull request is made from the branch you have made changes in.

10. Enjoy your day!!
