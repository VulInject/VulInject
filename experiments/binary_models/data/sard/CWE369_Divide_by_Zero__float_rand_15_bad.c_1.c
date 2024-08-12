#VAR1 ""
#VAR1 <VAR2.VAR3>
void FUN1()
{
    float VAR4;
    VAR4 = 0.0F;
    switch(6)
    {
    case 6:
        VAR4 = (float)FUN2();
        break;
    default:
        break;
    }
    switch(7)
    {
    case 7:
    {
        int VAR5 = (int)(100.0 / VAR4);
        FUN3(VAR5);
    }
    break;
    default:
        break;
    }
}
int main(int argc, char * argv[])
{
    srand( (unsigned)FUN4(NULL) );
    FUN1();
    return 0;
}