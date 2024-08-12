static char *FUN1(curl_off_t VAR1, char *VAR2)
{

if(VAR1 < FUN2(100000))
FUN3(VAR2, 6, "" VAR3, VAR1);

else if(VAR1 < FUN2(10000) * VAR4)
FUN3(VAR2, 6, "" VAR3 "", VAR1/VAR4);

else if(VAR1 < FUN2(100) * VAR5)

FUN3(VAR2, 6, "" VAR3 ""
VAR3 "", VAR1/VAR5,
(VAR1%VAR5) / (VAR5/FUN2(10)) );

else if(VAR1 < FUN2(10000) * VAR5)

FUN3(VAR2, 6, "" VAR3 "", VAR1/VAR5);

else if(VAR1 < FUN2(100) * VAR6)

FUN3(VAR2, 6, "" VAR3 ""
VAR3 "", VAR1/VAR6,
(VAR1%VAR6) / (VAR6/FUN2(10)) );

else if(VAR1 < FUN2(10000) * VAR6)

FUN3(VAR2, 6, "" VAR3 "", VAR1/VAR6);

else if(VAR1 < FUN2(10000) * VAR7)

FUN3(VAR2, 6, "" VAR3 "", VAR1/VAR7);

else

FUN3(VAR2, 6, "" VAR3 "", VAR1/VAR8);



return VAR2;
}