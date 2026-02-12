static u16 NFTL_findfreeblock(struct NFTLrecord *nftl, int desperate )
{


u16 pot = nftl->LastFreeEUN;
int silly = nftl->nb_blocks;


if (!desperate && nftl->numfreeEUNs < 2) {
pr_debug("NFTL_findfreeblock: there are too few free EUNs\n");
return BLOCK_NIL;
}


do {
if (nftl->ReplUnitTable[pot] == BLOCK_FREE) {
nftl->LastFreeEUN = pot;
nftl->numfreeEUNs--;
return pot;
}


if (++pot > nftl->lastEUN)
pot = le16_to_cpu(nftl->MediaHdr.FirstPhysicalEUN);

if (!silly--) {
printk("Argh! No free blocks found! LastFreeEUN = %d, "
"FirstEUN = %d\n", nftl->LastFreeEUN,
le16_to_cpu(nftl->MediaHdr.FirstPhysicalEUN));
return BLOCK_NIL;
}
} while (pot != nftl->LastFreeEUN);

return BLOCK_NIL;
}