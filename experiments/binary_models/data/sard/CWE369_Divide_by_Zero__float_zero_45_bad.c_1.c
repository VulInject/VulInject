#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    float VAR4;
    VAR4 = 0.0F;
    if(VAR5)
    {
        VAR4 = 0.0F;
    }
    if(VAR5)
    {
        {
            int VAR6 = (int)(100.0 / VAR4);
            FUN2(VAR6);
        }
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN3(NULL) );
    FUN1();
    return 0;
}