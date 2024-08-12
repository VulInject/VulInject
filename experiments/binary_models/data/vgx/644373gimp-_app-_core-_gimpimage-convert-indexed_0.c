FUN1 (const gdouble  VAR1,
const gdouble  VAR2,
const gdouble  VAR3,
VAR4        *VAR5,
VAR4        *VAR6,
VAR4        *VAR7)
{
gfloat  VAR8[3];
gfloat  VAR9[3];
gdouble VAR10, VAR11, VAR12;

VAR10 = ((VAR13) (VAR1)) * 255.0F / (VAR13) (VAR14 - 1);
VAR11 = ((VAR13)( VAR2)) * 255.0F / (VAR13) (VAR15 - 1);
VAR12 = ((VAR13)( VAR3)) * 255.0F / (VAR13) (VAR16 - 1);

VAR10 = VAR10 / VAR17;
VAR11 = (VAR11 / VAR18) + VAR19;
VAR12 = (VAR12 / VAR20) + VAR21;

VAR9[0] = VAR10;
VAR9[1] = VAR11;
VAR9[2] = VAR12;

FUN2 (VAR22, VAR9, VAR8, 1);

*VAR5 = FUN3 (FUN4 (VAR8[0] * 255, 0.0F, 255.0F));
*VAR6 = FUN3 (FUN4 (VAR8[1] * 255, 0.0F, 255.0F));
*VAR7 = FUN3 (FUN4 (VAR8[2] * 255, 0.0F, 255.0F));
}



struct VAR23
{
gint VAR24;
gint VAR25;
gint VAR26;
};

struct VAR27
{
Pass1Func     VAR28;       
Pass2InitFunc VAR29; 
Pass2Func     VAR30;      
CleanupFunc   VAR31;      

VAR32  *VAR33;           

gint          VAR34; 
gint          VAR35;  
Color         VAR36[256];                
Color         VAR37[256];                
guint64       VAR38[256];    
CFHistogram   VAR39;                

gboolean      VAR40;
gint          VAR41;            

VAR42 *VAR43;
};

typedef struct
{

gint    VAR44, VAR45;
gint    VAR46;
gint    VAR47, VAR48;
gint    VAR49;
gint    VAR50, VAR51;
gint    VAR52;


gint    VAR53;


gint64  VAR54;


guint64 VAR55;

guint64 VAR56;
guint64 VAR57;
guint64 VAR58;

} VAR59, *VAR60;