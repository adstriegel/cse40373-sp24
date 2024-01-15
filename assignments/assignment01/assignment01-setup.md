# CSE 40373 - Spring 2024 - Assignment 01

The focus on this assignment is to get you setup for assignment submission for the class as well as to do some introductory coding integrating C and Python via ZMQ.  

## Pre-Requisites

* GitHub account
* Git installed on your machine or use the student machines
	* Installed / accessible via a command prompt
* Browse and review the About Git page

## Task 1: Clone the Public Class Repository

In the first task, we will [clone](https://git-scm.com/book/en/v2/Git-Basics-Getting-a-Git-Repository) the class repository.  Cloning will create a local copy that we can synchronize (`fetch`) updates from the class repository.  The class repository is public meaning that anyone can clone it which is what you will do in this first step. 

You will have read access (`clone`, `fetch`) to the class repository just as any member of the public.  Note that you do **not** have edit access, only the ability to fetch updates.  The class repository can be found at the following location:

[https://github.com/adstriegel/cse40373-sp24.git](https://github.com/adstriegel/cse40373-sp24.git)

Before we clone the repository, we should think about where we want to put the repository itself.  Generally, creating a directory somewhere to place your repositories is a good idea.  For instance, a common approach is to create a `repos` directory in the Documents directory.

Go ahead and figure out where you would like your repositories to go either on your local machine or on the ND CSE student machines.

Switch into that particular directory and while in the your repository holding directory, go ahead and clone the repository:

    % cd ~/Documents/repos
    % pwd
    /Users/striegel/Documents/repos
    % git clone https://github.com/adstriegel/cse40373-sp24.git

If you look now in your repository directory, you should now have the repository for the class in the `cse40373-sp24` directory. 

    % ls
    adstriegel.github.io	advos_book   cse20289-fa23		cse40373-sp24
    %
    
Go ahead and change into the repository.
 
    % cd cse40373-sp24
    % ls
    LICENSE   README.md    assignments   course-mats


From there, you should see the various files that would be visible on the repository website (e.g. browsing to [https://github.com/adstriegel/cse40373-sp24.git](https://github.com/adstriegel/cse40373-sp24.git)).  If you list the files in the directory, you should see all of the respective files as well as the files contained within the various sub-directories.  

The actual magic itself for `git` is in a hidden directory, namely the `.git` directory.  Try changing into that particular directory and looking at the files:

    % cd .git
    % pwd
    /Users/striegel/Documents/repos/cse40373-sp24/.git
    % ls
    FETCH_HEAD  config	 hooks  info  object  refs
    HEAD  description  index	logs	packed-refs
    
We could dive into these files but that is getting a bit weedy.  For now, just know that there is a `.git` directory that contains all of the actual repository data.  The files that you see are all of the ones that actually matter.

If at any time we would like to make sure we are up to date, we simply do a `pull` inside of the repository.  

    % pwd
    /Users/striegel/Documents/repos/cse40373-sp24
    % git pull
    Already up to date.
    
The `git pull` command looks inside the `.git` subdirectory to figure out where the remote repository is and then attempts to pull down any updates from that remote repository.  Since we just cloned the repository, there should not be any updates.  The act of doing a `clone` or `pull` are read-only commands and as such do not require any credentials if the repository is public.    

> Should we `fetch` or should we `pull`, what is the [difference](https://www.geeksforgeeks.org/git-difference-between-git-fetch-and-git-pull/)? The answer is it depends.  `pull` tries basically bring you up to date and to fast-forward merge. That usually is OK but not always if lots of contributors are changing lots of things.  `fetch` takes a kinder, gentler approach. Think of `pull` = `fetch` + `merge`.     

### Summary - Task 1

At this point, we have now successfully cloned the class repository.  You should periodically make sure to pull (e.g. sync) to make sure that everything is up to date.  You will not be directly editing files in the class repository, only using those files for copying out and / or starting a new assignment.

# Task 2 - Passwordless Login

For your actual assignments, we will be creating a separate repository.  While the *class repository* is public, your repository will be private, shared only with the TAs.    

> Although GitHub offers the ability to fork a repository (e.g. make a separate / new repository), the availability of a forked repository must be the same as the source repository. For the public class repository, that would mean that any forked repository by you the student would also be public, not exactly what we would like.  There are organizational controls / mechanisms that allow that functionality to change but we are going to try to operate with a largely vanilla usage of GitHub. 

Since creation and pushing require write access, we will first need to set up a passwordless login for GitHub.  Previously, GitHub allowed both password-based and passwordless (keyed) logins.  Since then, passwords have been disabled.  Although we could lean heavy on various GUIs and their usage of authorization tokens (e.g. GitKraken), it does behoove us to learn exactly how a passwordless login would work.  

Basically, we are going to set up to use `git` via SSH using pre-shared keys.  An overview of how this works with GitHub can be [here](https://docs.github.com/en/authentication/connecting-to-github-with-ssh/about-ssh).

1. Generate SSH keys if you don't have them yet:

        # Accept the defaults, don't make a password if you 
        # want to go passwordless
        % ssh-keygen

2. Copy the contents of `~/.ssh/id_rsa.pub` to the SSH Keys section of your GitHub settings page:

    [https://github.com/settings/keys](https://github.com/settings/keys)
    
        # Copy and paste the contents of this file into GitHub
        % cat ~/.ssh/id_rsa.pub

    > The id_rsa.pub file is the public key half.  The private key is also present can be found in the `.ssh` directory as well.  You should never share the private side of the key (hence why it is called the private side).  

3. Edit/create `~/.ssh/config` to use this key with GitHub:

        # Add the following to your config (replace $NETID 
        with your netid)
        % vim ~/.ssh/config
        Host github.com
            User git
            Hostname github.com
            PreferredAuthentications publickey
            IdentityFile /escnfs/home/$NETID/.ssh/id_rsa

    Once this is done, you should be able to do `git` operations without a password. You will need to accept the host key the first time by typing in "yes".  

Note that we typically will do all of our `git` operations either from your laptop or from the CSE student machines.  Since we do share the Raspberry Pi in the labs, it may not be the best idea to put your private key to your Github account on a shared system.  

## Task 3 - Creating a repository

For Git, there are two ways to create a repository: initializing a repository and then associating it with a remote repository or creating the remote repository and then cloning it locally.  Generally, using the web for creation tends to be a bit easier.

1. Login to your GitHub account and create a new repository named `student-cse40373-sp24-NETID` where `NETID` is your Notre Dame net ID (e.g. `striegel`). 
2. Go to that repository and make sure that the repository is set as private.
3. Add Professor Striegel and the TA (adstriegel, TBA) as collaborators for your repository.  We will strictly be read-only but we do need access for your private repository.  

Now that we have it created, let's clone your repository then locally.  You should replace `adstriegel` with your GitHub username and the repository name to use your netid.  

    # Example of cloning GitHub assignments repository to 
    # local or student machine
    % git clone git@github.com:adstriegel/student-cse40373-sp24-striegel.git
    remote: Enumerating objects: 3, done.
    remote: Counting objects: 100% (3/3), done.
    remote: Compressing objects: 100% (2/2), done.
    remote: Total 3 (delta 0), reused 0 (delta 0), pack-reused 0
    Receiving objects: 100% (3/3), done.
    % ls
    README.md
    %
    
> We need the username and hostname `git@github.com` to get access to your private repository together with the keys that we set up earlier.

If all goes well, your private repository will have been cloned appropriately (just like the class repository).  

At this point, you should now have two directories underneath your repositories directory, one directory containing the **public class repository** and the other one containing **your private repository**.  The class repository should have files while your private repository should be empty outside of a `README.md`.