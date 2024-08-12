#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    float VAR4;
    VAR4 = 0.0F;
    if(VAR5==5)
    {
        VAR4 = (float)FUN2();
    }
    if(VAR5==5)
    {
        {
            int VAR6 = (int)(100.0 / VAR4);
            FUN3(VAR6);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}