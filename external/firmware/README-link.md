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



