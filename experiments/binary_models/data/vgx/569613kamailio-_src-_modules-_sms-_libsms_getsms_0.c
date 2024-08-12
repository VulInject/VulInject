Either version 2 of the VAR1, or (at your VAR2) any later VAR3.

VAR4:
VAR5:VAR6.VAR7@VAR8.VAR9.VAR10






(VAR11)[0] = (VAR12)[3];\
(VAR11)[1] = (VAR12)[2];\
(VAR11)[2] = '';\
(VAR11)[3] = (VAR12)[5];\
(VAR11)[4] = (VAR12)[4];\
(VAR11)[5] = '';\
(VAR11)[6] = (VAR12)[1];\
(VAR11)[7] = (VAR12)[0];}

(VAR13)[0] = (VAR12)[1];\
(VAR13)[1] = (VAR12)[0];\
(VAR13)[2] = '';\
(VAR13)[3] = (VAR12)[3];\
(VAR13)[4] = (VAR12)[2];\
(VAR13)[5] = '';\
(VAR13)[6] = (VAR12)[5];\
(VAR13)[7] = (VAR12)[4];}





static inline int FUN1(char* VAR14)
{
unsigned int VAR15=0;

if (VAR14[0]>57)
VAR15=VAR14[0]-55;
else
VAR15=VAR14[0]-48;
VAR15=VAR15<<4;
if (VAR14[1]>57)
VAR15+=VAR14[1]-55;
else
VAR15+=VAR14[1]-48;
return (int)VAR15;
}