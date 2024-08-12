static inline int FUN1(void *VAR1, unsigned long VAR2, size_t VAR3)
{
struct iov_iter VAR4;
struct kvec VAR5;

VAR5.VAR6 = VAR1;
VAR5.VAR7 = VAR3;
FUN2(&VAR4, VAR8, &VAR5, 1, VAR3);
if (FUN3(&VAR4, VAR2, VAR3) < VAR3)
return -VAR9;
return 0;
}