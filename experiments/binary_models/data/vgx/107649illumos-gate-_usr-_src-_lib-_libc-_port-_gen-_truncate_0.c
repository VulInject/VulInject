int
FUN1(const char *VAR1, off_t VAR2)
{

int VAR3 = 0;
int VAR4;
int VAR5;


(void) FUN2(VAR6, &VAR4);
if ((VAR5 = open(VAR1, VAR7)) == -1 || FUN3(VAR5, VAR2) == -1)
VAR3 = -1;
if (VAR5 >= 0)
(void) close(VAR5);
(void) FUN2(VAR4, NULL);
return (VAR3);
}