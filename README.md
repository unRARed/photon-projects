Photon Projects
===============

I'll store the scripts I come up with for making real things do things here.
They will probably also suck.

Get `dfu-util` from homebrew and the `particle-ci` from npm.

To put the photon into DFU mode for programming over USB:

* hold both the setup and reset buttons
* release reset
* continue holding setup
  * led will change to magenta color - CONTINUE HOLDING!
  * led changes to yellow/amber color
* release setup button

cd into the directory where your code is and compile with:

`particle compile photon`

And flash the firmware with:

`particle flash --usb photon_frmware_[SOME_TIMESTAMP].bin`
