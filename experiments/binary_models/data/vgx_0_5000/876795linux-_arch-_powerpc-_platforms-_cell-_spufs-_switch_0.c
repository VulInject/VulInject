static int __do_spu_save(struct spu_state *prev, struct spu *spu)
{
int rc;



rc = quiece_spu(prev, spu);	        
switch (rc) {
default:
case 2:
case 6:
harvest(prev, spu);
return rc;
break;
case 0:
break;
}
save_csa(prev, spu);	                
save_lscsa(prev, spu);	                
return check_save_status(prev, spu);	
}