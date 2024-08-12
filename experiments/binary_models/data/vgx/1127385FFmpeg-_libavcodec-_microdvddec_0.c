static int FUN1(const char *VAR1, int VAR2)
{
char *VAR3 = strchr(VAR1, VAR2);
return VAR3 ? (VAR3 - VAR1) : -1;
}

struct VAR4 {
char VAR5;
int VAR6;
uint32_t VAR7;
uint32_t VAR8;
char *VAR9;
int VAR10;
};