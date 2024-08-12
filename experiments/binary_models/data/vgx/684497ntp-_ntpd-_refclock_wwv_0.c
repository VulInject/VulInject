static void
FUN1(
struct VAR1 *VAR1,	
double VAR2		
)
{
struct VAR3 *VAR4;
struct VAR5 *VAR6;
struct VAR7 *VAR8, *VAR9;

static double VAR10[5];	
double VAR11;		
static double VAR12[9];	
double VAR13;		
static double VAR14[41];	
double VAR15;		

static int VAR16;	
static double VAR17[VAR18]; 
static double VAR19[VAR18]; 

static int VAR20;	
static int VAR21;	

static int VAR22;	
static double VAR23[VAR24]; 
static double VAR25[VAR24]; 
static double VAR26;	
static double VAR27;	

static double VAR28[VAR29]; 
static double VAR30[VAR29]; 
static double VAR31;	
static double VAR32;	

static int VAR33;	
static double VAR34[VAR24]; 
static double VAR35[VAR24]; 
static double VAR36;	
static double VAR37;	

static double VAR38[VAR29]; 
static double VAR39[VAR29]; 
static double VAR40;	
static double VAR41;	

static double VAR42[VAR43]; 
static double VAR44, VAR45; 
static int VAR46;	

static int VAR47;	
int	VAR48;		
double	VAR49;
int	VAR50;

VAR4 = VAR1->VAR51;
VAR6 = VAR4->VAR52;

if (!VAR47) {
VAR47 = 1;
memset((char *)VAR10, 0, sizeof(VAR10));
memset((char *)VAR12, 0, sizeof(VAR12));
memset((char *)VAR14, 0, sizeof(VAR14));
memset((char *)VAR17, 0, sizeof(VAR17));
memset((char *)VAR19, 0, sizeof(VAR19));
memset((char *)VAR23, 0, sizeof(VAR23));
memset((char *)VAR25, 0, sizeof(VAR25));
memset((char *)VAR28, 0, sizeof(VAR28));
memset((char *)VAR30, 0, sizeof(VAR30));
memset((char *)VAR34, 0, sizeof(VAR34));
memset((char *)VAR35, 0, sizeof(VAR35));
memset((char *)VAR38, 0, sizeof(VAR38));
memset((char *)VAR39, 0, sizeof(VAR39));
memset((char *)VAR42, 0, sizeof(VAR42));
}


VAR11 = (VAR10[4] = VAR10[3]) * 8.360961e-01;
VAR11 += (VAR10[3] = VAR10[2]) * -3.481740e+00;
VAR11 += (VAR10[2] = VAR10[1]) * 5.452988e+00;
VAR11 += (VAR10[1] = VAR10[0]) * -3.807229e+00;
VAR10[0] = VAR2 * VAR53 - VAR11;
VAR11 = VAR10[0] * 3.281435e-03
+ VAR10[1] * -1.149947e-02
+ VAR10[2] * 1.654858e-02
+ VAR10[3] * -1.149947e-02
+ VAR10[4] * 3.281435e-03;


VAR50 = VAR6->VAR54;
VAR6->VAR54 = (VAR6->VAR54 + VAR55) % 80;
VAR49 = VAR56[VAR50] * VAR11 / (VAR57 / 2. * VAR58);
VAR6->VAR59 -= VAR17[VAR16];
VAR17[VAR16] = VAR49;
VAR6->VAR59 += VAR49;

VAR50 = (VAR50 + 20) % 80;
VAR49 = VAR56[VAR50] * VAR11 / (VAR57 / 2. * VAR58);
VAR6->VAR60 -= VAR19[VAR16];
VAR19[VAR16] = VAR49;
VAR6->VAR60 += VAR49;
VAR16 = (VAR16 + 1) % VAR18;


VAR13 = (VAR12[8] = VAR12[7]) * 4.897278e-01;
VAR13 += (VAR12[7] = VAR12[6]) * -2.765914e+00;
VAR13 += (VAR12[6] = VAR12[5]) * 8.110921e+00;
VAR13 += (VAR12[5] = VAR12[4]) * -1.517732e+01;
VAR13 += (VAR12[4] = VAR12[3]) * 1.975197e+01;
VAR13 += (VAR12[3] = VAR12[2]) * -1.814365e+01;
VAR13 += (VAR12[2] = VAR12[1]) * 1.159783e+01;
VAR13 += (VAR12[1] = VAR12[0]) * -4.735040e+00;
VAR12[0] = VAR2 - VAR13;
VAR13 = VAR12[0] * 8.203628e-03
+ VAR12[1] * -2.375732e-02
+ VAR12[2] * 3.353214e-02
+ VAR12[3] * -4.080258e-02
+ VAR12[4] * 4.605479e-02
+ VAR12[5] * -4.080258e-02
+ VAR12[6] * 3.353214e-02
+ VAR12[7] * -2.375732e-02
+ VAR12[8] * 8.203628e-03;


VAR6->VAR61 = (VAR6->VAR61 + 1) % VAR62;
VAR48 = VAR6->VAR61 % VAR43;


VAR50 = VAR22;
VAR22 = (VAR22 + VAR63) % 80;

VAR49 = VAR56[VAR50] * VAR13 / (VAR57 / 2.);
VAR26 -= VAR23[VAR20];
VAR23[VAR20] = VAR49;
VAR26 += VAR49;
VAR31 -= VAR28[VAR21];
VAR28[VAR21] = VAR49;
VAR31 += VAR49;

VAR50 = (VAR50 + 20) % 80;
VAR49 = VAR56[VAR50] * VAR13 / (VAR57 / 2.);
VAR27 -= VAR25[VAR20];
VAR25[VAR20] = VAR49;
VAR27 += VAR49;
VAR32 -= VAR30[VAR21];
VAR30[VAR21] = VAR49;
VAR32 += VAR49;

VAR8 = &VAR6->VAR64[VAR6->VAR65].VAR66;
VAR8->VAR67 = FUN2(VAR26 * VAR26 + VAR27 * VAR27) / VAR68;
if (!(VAR6->VAR69 & VAR70))
FUN3(VAR1, VAR8, (int)(VAR4->VAR71 * VAR43));


VAR50 = VAR33;
VAR33 = (VAR33 + VAR72) % 80;

VAR49 = VAR56[VAR50] * VAR13 / (VAR57 / 2.);
VAR36 -= VAR34[VAR20];
VAR34[VAR20] = VAR49;
VAR36 += VAR49;
VAR40 -= VAR38[VAR21];
VAR38[VAR21] = VAR49;
VAR40 += VAR49;

VAR50 = (VAR50 + 20) % 80;
VAR49 = VAR56[VAR50] * VAR13 / (VAR57 / 2.);
VAR37 -= VAR35[VAR20];
VAR35[VAR20] = VAR49;
VAR37 += VAR49;
VAR41 -= VAR39[VAR21];
VAR39[VAR21] = VAR49;
VAR41 += VAR49;

VAR9 = &VAR6->VAR64[VAR6->VAR65].VAR73;
VAR9->VAR67 = FUN2(VAR36 * VAR36 + VAR37 * VAR37) / VAR68;
if (!(VAR6->VAR69 & VAR70))
FUN3(VAR1, VAR9, (int)(VAR4->VAR74 * VAR43));
VAR20 = (VAR20 + 1) % VAR24;
VAR21 = (VAR21 + 1) % VAR29;


if (VAR6->VAR61 == 0) {
VAR6->VAR75++;
if (!(VAR6->VAR69 & VAR70)) {


if (!FUN4(VAR1))
VAR6->VAR75 = 0;
} else {


if (VAR6->VAR69 & VAR76) {
VAR6->VAR61 -= VAR43;
if (VAR6->VAR61 < 0)
VAR6->VAR61 += VAR62;
}
}
}


if (VAR6->VAR69 & VAR70) {
FUN5(VAR1);
} else if (VAR6->VAR77 != NULL) {
VAR8 = VAR6->VAR77;
if (VAR8->VAR78 >= VAR79 && VAR48 == VAR8->VAR80 % VAR43)
{
VAR6->VAR81 = (60 - VAR8->VAR80 / VAR43) % 60;
VAR6->VAR82 = 0;
VAR6->VAR69 |= VAR70;
VAR6->VAR75 = 0;
if (!(VAR6->VAR69 & VAR83))
VAR6->VAR84 = VAR6->VAR85 = VAR48;
else
VAR6->VAR84 = VAR6->VAR85;

}
}


if (VAR6->VAR69 & VAR86)
VAR15 = FUN2(VAR31 * VAR31 + VAR32 * VAR32) /
VAR87;
else if (VAR6->VAR69 & VAR88)
VAR15 = FUN2(VAR40 * VAR40 + VAR41 * VAR41) /
VAR87;
else
VAR15 = 0;


VAR49 = (VAR42[VAR48] += (VAR15 - VAR42[VAR48]) /
VAR6->VAR89);
if (VAR49 > VAR44) {
int	VAR90;

VAR44 = VAR49;
VAR46 = VAR48;
VAR90 = VAR48 - 6 * VAR57;
if (VAR90 < 0)
VAR90 += VAR43;
VAR45 = FUN6(VAR42[VAR90]);
}
if (VAR48 == 0) {
VAR6->VAR44 = VAR44;
VAR6->VAR91 = FUN7(VAR44, VAR45);
VAR46 -= VAR87 * VAR57;
if (VAR46 < 0)
VAR46 += VAR43;
FUN8(VAR1, VAR46);
if (!(VAR6->VAR69 & VAR83))
VAR6->VAR92 |= VAR93;
VAR44 = 0;
if (!(VAR6->VAR69 & VAR70))
FUN9(VAR1);
}
}