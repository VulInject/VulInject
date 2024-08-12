int main(int argc, char **argv)
{
int VAR1 = -1, VAR2 = -1;
char **VAR3 = NULL;

FUN1(&VAR2, &VAR3);
VAR1 = FUN2(VAR2, VAR3);
FUN3(&VAR2, &VAR3);
if (VAR4) FUN4 ();
return VAR1;
}