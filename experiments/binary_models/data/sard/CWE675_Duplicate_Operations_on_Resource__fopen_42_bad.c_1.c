#VAR1 ""
static VAR2 * FUN1(VAR2 * VAR3)
{
    VAR3 = fopen("", "");
    fclose(VAR3);
    return VAR3;
}
void FUN2()
{
    VAR2 * VAR3;
    VAR3 = NULL; 
    VAR3 = FUN1(VAR3);
    fclose(VAR3);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN2();
    return 0;
}