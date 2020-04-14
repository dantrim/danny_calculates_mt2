# danny_calculates_mt2
Examples of how danny calculates mt2

This package has a MWE of how to set up the (asymmetric) MT2 calculator as devleoped by Chris Lester, w/ contribution from Ben Nachman. The source files for this calculator are located in the **mt2** directory.

## Docs on mt2

* [Paper describing the generic, assymettric MT2 calculation used in this repo](https://arxiv.org/abs/1411.4312)
* [The truth behind the glam**our**](https://arxiv.org/abs/hep-ph/0304226)
* [Lester's MT2 algorithm agglomeration](https://www.hep.phy.cam.ac.uk/~lester/mt2/)

## Installation and Running

```bash
git clone git@github.com:dantrim/danny_calculates_mt2.git
cd danny_calculates_mt2
mkdir build/
cd build/
cmake ..
make
./calculate_mt2
```

## Requirements
ROOT and CMake
