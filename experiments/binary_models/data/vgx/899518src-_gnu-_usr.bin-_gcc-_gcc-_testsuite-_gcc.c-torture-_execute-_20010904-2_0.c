Y VAR1[2];

int main(void)
{
if (((char *)&VAR1[1] - (char *)&VAR1[0]) & 31)
FUN1 ();
FUN2 (0);
}