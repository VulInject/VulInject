#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    goto VAR4;
VAR4:
    fwrite((char *)"", sizeof(char), strlen(""), VAR5);
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN2(NULL) );
    FUN1();
    return 0;
}