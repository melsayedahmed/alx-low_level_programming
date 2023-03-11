#!/bin/bash
read -p "File name: " name
chmod u+x $name
vi $name
git add $name
read -p 'Commit message: ' message
git commit -m $message
git push
