typedef struct {
sph_blake512_context    VAR1;
sph_bmw512_context      VAR2;
sph_groestl512_context  VAR3;
sph_skein512_context    VAR4;
sph_jh512_context       VAR5;
sph_keccak512_context   VAR6;
sph_luffa512_context    VAR7;
sph_cubehash512_context VAR8;
sph_shavite512_context  VAR9;
sph_simd512_context     VAR10;
sph_echo512_context     VAR11;
sph_hamsi512_context    VAR12;
sph_fugue512_context    VAR13;
} VAR14;

static Xhash_context_holder VAR15;


void FUN1()
{
FUN2(&VAR15.VAR1);   
FUN3(&VAR15.VAR2);   
FUN4(&VAR15.VAR3);   
FUN5(&VAR15.VAR4);   
FUN6(&VAR15.VAR5);     
FUN7(&VAR15.VAR6); 
FUN8(&VAR15.VAR7);
FUN9(&VAR15.VAR8);
FUN10(&VAR15.VAR9);
FUN11(&VAR15.VAR10);
FUN12(&VAR15.VAR11);
FUN13(&VAR15.VAR12);
FUN14(&VAR15.VAR13);
}