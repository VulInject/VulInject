#VAR1 ""
char* VAR2 = "";
char* VAR3 = "";
char * FUN1()
{
    if(rand()%2 == 0)
    {
        return NULL;
    }
    else
    {
        return VAR2;
    }
}
char * FUN2()
{
    if(rand()%2 == 0)
    {
        return NULL;
    }
    else
    {
        return VAR3;
    }
}
void FUN3()
{
    goto VAR4;
VAR4:
    if(VAR5 == NULL)
    {
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN3();
    return 0;
}