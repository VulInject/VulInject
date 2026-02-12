mDNSexport long mDNSPosixReadTCP(int fd, void *buf, unsigned long buflen, mDNSBool *closed)
{
static int CLOSEDcount = 0;
static int EAGAINcount = 0;
ssize_t nread = recv(fd, buf, buflen, 0);

if (nread > 0)
{
CLOSEDcount = 0; 
EAGAINcount = 0; 
} 
else if (nread == 0)
{
*closed = mDNStrue;
if ((++CLOSEDcount % 20) == 0)
{
LogMsg("ERROR: mDNSPosixReadFromSocket - recv %d got CLOSED %d times", fd, CLOSEDcount); 
assert(CLOSEDcount < 1000);






}
}

else if (errno == ECONNRESET)
{
nread = 0; *closed = mDNStrue;
}
else if (errno != EAGAIN)
{
LogMsg("ERROR: mDNSPosixReadFromSocket - recv: %d (%s)", errno, strerror(errno));
nread = -1;
}
else
{ 
nread = 0;
if ((++EAGAINcount % 1000) == 0)
{
LogMsg("ERROR: mDNSPosixReadFromSocket - recv %d got EAGAIN %d times", fd, EAGAINcount);
sleep(1);
}
}
return nread;
}