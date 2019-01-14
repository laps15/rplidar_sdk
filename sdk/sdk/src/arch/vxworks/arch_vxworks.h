

#pragma once

// libc dep
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>
#include <time.h>
#include <stdarg.h>

// libc++ dep
#include <iostream>
#include <string>

// VxWorks specific
#include <vxworks.h>
#include <errno.h>
#include <unistd.h>
#include <pthread.h>
#include <time.h>
#include <fcntl.h>
#include <ioctl.h>
#include <selectLib.h>
#include <dirLib.h> // alternative to stat.h can be deleted if there are no references

//custom 
#include "timer.h"  //for delay

