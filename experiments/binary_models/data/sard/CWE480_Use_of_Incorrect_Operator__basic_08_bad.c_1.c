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
int FUN3()
{
    return 1;
}
int FUN4()
{
    return 0;
}
void FUN5()
{
    if(FUN3())
    {
        if(VAR4 == NULL)
        {
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN6(NULL) );
    FUN5();
    return 0;
}