// Standard C libraries

#include <stdio.h> // printf (print to console) and scanf (read from console)
#include <stdlib.h>// malloc (allocate memory),free (deallocate memory),exit(process control)
#include <string.h>// strlen (get length of string),strcpy (copy string),strcmp (compare strings)
#include <math.h>  // pow (power function),sqrt (square root function)
#include <fcntl.h> // open (open file),close (close file)
#include <errno.h> // error numbers
#include <unistd.h>// read and write (access to POSIX os API)
#include <sys/ioctl.h> //device specific input/output operations
#include <sys/types.h> // Data types used in system calls
#include <sys/stat.h> // stat(provides data by its call for retrieving file attributes)

// Linux Specific Libraries

#include <linux/i2c-dev.h> // I2C bus access on Linux Systems
<extern "C" {
#include <i2c/smbus.h>
}
 // smbus provides helper function for interacting with I2C devices using SMBUS (system management bus)

// ROS2 Libraries

#include "rclcpp/rclcpp.hpp" // ROS2 C++ API
#include "std_srvs/srv/emtpy.hpp" // Empty service message
#include "geometry_msgs/msg/twist.hpp" // Linear and angular velocity message

