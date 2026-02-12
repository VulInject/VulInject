krb5_error_code
krb5_lock_file(krb5_context context, int fd, int mode)
{
int                 lock_flag = -1;
krb5_error_code     retval = 0;
int lock_cmd = F_SETLKW;
fcntl_lock_st lock_arg = { 0 };

switch (mode & ~KRB5_LOCKMODE_DONTBLOCK) {
case KRB5_LOCKMODE_SHARED:
lock_arg.l_type = F_RDLCK;
lock_flag = LOCK_SH;
break;
case KRB5_LOCKMODE_EXCLUSIVE:
lock_arg.l_type = F_WRLCK;
lock_flag = LOCK_EX;
break;
case KRB5_LOCKMODE_UNLOCK:
lock_arg.l_type = F_UNLCK;
lock_flag = LOCK_UN;
break;
}

if (lock_flag == -1)
return(KRB5_LIBOS_BADLOCKFLAG);

if (mode & KRB5_LOCKMODE_DONTBLOCK) {
lock_cmd = F_SETLK;
lock_flag |= LOCK_NB;
}

lock_arg.l_whence = 0;
lock_arg.l_start = 0;
lock_arg.l_len = 0;
if (ofdlock(fd, lock_cmd, &lock_arg) == -1) {
if (errno == EACCES || errno == EAGAIN) 
return(EAGAIN);
if (errno != EINVAL)    
return(errno);
retval = errno;
} else
return 0;           

if (flock(fd, lock_flag) == -1)
retval = errno;

return retval;
}