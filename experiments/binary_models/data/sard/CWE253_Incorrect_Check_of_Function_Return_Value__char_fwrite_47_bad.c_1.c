#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    if(FUN2())
    {
        if (fwrite((char *)"", sizeof(char), strlen(""), VAR4) < 0)
        {
        }
    }
    else
    {
        if (fwrite((char *)"", sizeof(char), strlen(""), VAR4) != strlen(""))
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}