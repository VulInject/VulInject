if (loi->loi_lvb.lvb_ctime > current_ctime)
current_ctime = loi->loi_lvb.lvb_ctime;

CDEBUG(D_INODE, "MDT ID "DOSTID" on OST[%u]: s=%llu m=%llu a=%llu c=%llu b=%llu\n",
POSTID(&lsm->lsm_oi), loi->loi_ost_idx,
loi->loi_lvb.lvb_size, loi->loi_lvb.lvb_mtime,
loi->loi_lvb.lvb_atime, loi->loi_lvb.lvb_ctime,
loi->loi_lvb.lvb_blocks);
}

*kms_place = kms;
lvb->lvb_size = size;
lvb->lvb_blocks = blocks;
lvb->lvb_mtime = current_mtime;
lvb->lvb_atime = current_atime;
lvb->lvb_ctime = current_ctime;
return rc;
}