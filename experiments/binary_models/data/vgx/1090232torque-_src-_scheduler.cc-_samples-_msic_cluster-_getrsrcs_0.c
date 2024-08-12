* VAR1, WHETHER IN VAR2, STRICT VAR1, OR FUN1 (VAR3
* NEGLIGENCE OR VAR4) ARISING IN ANY WAY OUT OF THE USE OF THIS VAR5,
* EVEN IF ADVISED OF THE POSSIBILITY OF SUCH VAR6.
*
* This license will be governed by the laws of the Commonwealth of VAR7,
* without reference to its choice of law VAR8.










VAR9 *VAR10 = NULL; 

extern char *VAR11[16];
extern int VAR12;

static void FUN2(VAR9 *VAR13);


static void
FUN3(int VAR14)
{

return;
}


VAR9 *
FUN4(char *VAR15)
{
char            *VAR16 = "";
VAR9       *VAR17, *VAR18;
int              VAR19;
int              VAR20 = 0;
char            *VAR21 = NULL;
int              VAR22   = 0;

struct sigaction VAR23, VAR24;
unsigned int     VAR25; 
time_t           VAR26;  



if (VAR10 != NULL)
{
for (VAR17 = VAR10; VAR17 != NULL; VAR17 = VAR17->VAR27)
if (strcmp(VAR17->VAR15, VAR15) == 0)
return (VAR17);
}

FUN5("");



if ((VAR18 = (VAR9 *)malloc(sizeof(VAR9))) == NULL)
{
(void)sprintf(VAR28, "");
FUN6(VAR29, VAR30, VAR16, VAR28);
FUN7(("", VAR16, VAR28));

return (NULL); 
}

memset((void *)VAR18, 0, sizeof(VAR9));

VAR23.VAR31 = 0;
VAR23.VAR32 = VAR33;
FUN8(&VAR23.VAR34);
VAR25 = 0;
VAR26 = 0;



if (FUN9(VAR35, &VAR23, &VAR24) == 0)
{
VAR25 = FUN10(VAR36);
VAR26 = FUN11(NULL);
}

if ((VAR19 = FUN12(VAR15, VAR12)) == -1)
{
(void)sprintf(VAR28,
"", VAR15);
FUN6(VAR29, VAR30, VAR16, VAR28);

VAR22 = 1;
goto VAR37;
}


FUN13(0);



FUN14(VAR19, "");

FUN14(VAR19, "");

FUN14(VAR19, "");

FUN14(VAR19, "");

FUN14(VAR19, "");




VAR21 = FUN15(&VAR20, VAR19);

if (VAR21 != NULL)
{
VAR18->VAR38 = FUN16(VAR21);
(void)free(VAR21);
}
else
{
(void)sprintf(VAR28, "",
VAR20, VAR39);
FUN6(VAR29, VAR30, VAR16, VAR28);
VAR22 = 1;
goto VAR37;
}


VAR21 = FUN15(&VAR20, VAR19);

if (VAR21 != NULL)
{
VAR18->VAR40 = FUN17(VAR21);
(void)free(VAR21);
}
else
{
(void)sprintf(VAR28, "",
VAR20, VAR39);
FUN6(VAR29, VAR30, VAR16, VAR28);
VAR22 = 1;
goto VAR37;
}


VAR21 = FUN15(&VAR20, VAR19);

if (VAR21 != NULL)
{
VAR18->VAR41 = FUN17(VAR21);
(void)free(VAR21);
}
else
{
(void)sprintf(VAR28, "",
VAR20, VAR39);
FUN6(VAR29, VAR30, VAR16, VAR28);
VAR22 = 1;
goto VAR37;
}


VAR21 = FUN15(&VAR20, VAR19);

if (VAR21 != NULL)
{
VAR18->VAR42 = FUN18(VAR21);
(void)free(VAR21);
}
else
{
(void)sprintf(VAR28, "",
VAR20, VAR39);
FUN6(VAR29, VAR30, VAR16, VAR28);
VAR22 = 1;
goto VAR37;
}




VAR21 = FUN15(&VAR20, VAR19);

if (VAR21 != NULL)
{
VAR18->VAR43 = FUN19(VAR21);
(void)free(VAR21);
}
else
{
(void)sprintf(VAR28, "",
VAR20, VAR39);
FUN6(VAR29, VAR30, VAR16, VAR28);
VAR22 = 1;
goto VAR37;
}

VAR37:



if (VAR19 >= 0)  
FUN20(VAR19);


FUN10(0);

FUN9(VAR35, &VAR24, &VAR23);


if (VAR25)
{
FUN7(("", VAR16,
VAR25, (FUN11(NULL) - VAR26)));


VAR25 -= (FUN11(NULL) - VAR26);



if (VAR25 < 1)
VAR25 = 1;

FUN7(("", VAR25));

FUN10(VAR25);
}



if (VAR22)
{
(void)sprintf(VAR28,
"", VAR15);
FUN6(VAR29, VAR30, VAR16, VAR28);
FUN7(("", VAR16, VAR28));
free(VAR18);
return (NULL);
}


VAR18->VAR15 = FUN19(VAR15);

if (VAR18->VAR15 == NULL)
{
(void)sprintf(VAR28, "",
VAR15);
FUN6(VAR29, VAR30, VAR16, VAR28);
FUN7(("", VAR16, VAR28));
free(VAR18);
return (NULL);
}

if (VAR10 == NULL)
{
VAR10  = VAR18; 
}
else
{
for (VAR17 = VAR10; VAR17->VAR27 != NULL; VAR17 = VAR17->VAR27)
;

VAR17->VAR27 = VAR18;
}


VAR18->VAR27 = NULL;

return (VAR18);
}

void
FUN21(void)
{
VAR9 *VAR13;

for (VAR13 = VAR10; VAR13 != NULL; VAR13 = VAR13->VAR27)
FUN2(VAR13);
}

static void
FUN2(VAR9 *VAR13)
{
char   *VAR16 = "";
char  VAR44[30];



(void)sprintf(VAR28,
"", VAR13->VAR15);
FUN6(VAR29, VAR30, VAR16, VAR28);

(void)sprintf(VAR28, "", "",
VAR13->VAR43);
FUN6(VAR29, VAR30, VAR16, VAR28);

(void)sprintf(VAR28, "",
"", VAR13->VAR45, VAR13->VAR42,
(VAR13->VAR45 * 100.0) / VAR13->VAR42);
FUN6(VAR29, VAR30, VAR16, VAR28);

(void)sprintf(VAR28, "", "",
VAR13->VAR38);
FUN6(VAR29, VAR30, VAR16, VAR28);

strcpy(VAR44, FUN22(VAR13->VAR41));
(void)sprintf(VAR28, "", "",
FUN22(VAR13->VAR40), VAR44);
FUN6(VAR29, VAR30, VAR16, VAR28);

(void)sprintf(VAR28, "", "",
FUN22(VAR13->VAR46));
FUN6(VAR29, VAR30, VAR16, VAR28);

(void)sprintf(VAR28, "", "",
VAR13->VAR47);
FUN6(VAR29, VAR30, VAR16, VAR28);

}