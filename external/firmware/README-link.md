# External firmware (link)

This directory is a placeholder to make the firmware repository discoverable from the web UI.

The firmware is maintained in a separate repository:

https://github.com/fussdeek-del/Black-Flipper-firmware

If you want to initialize the firmware as a true git submodule locally, run:

```bash
# from the repository root
# add the submodule and point it to the firmware repo (default branch)
# NOTE: only run this if you want Git to track the firmware as a submodule commit

git submodule add https://github.com/fussdeek-del/Black-Flipper-firmware external/firmware
git commit -m "Add firmware submodule at external/firmware"
```

Or to initialize the submodule pointer after cloning this branch (if the submodule pointer is added later):

```bash
git submodule update --init --recursive
```

This placeholder keeps the main repository uncluttered while making the firmware fully accessible from the repository tree. If you'd like me to pin the submodule to a specific commit or add the actual gitlink submodule pointer in this branch, tell me the commit SHA to pin and I will add the gitlink (requires creating the gitlink commit).