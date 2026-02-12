static bool GetFirstHeapBlock(PDEBUG_HEAP_INFORMATION heapInfo, PHeapBlock hb) {
r_return_val_if_fail (heapInfo && hb, false);
PHeapBlockBasicInfo block;

hb->index = 0;
hb->dwAddress = 0;
hb->dwFlags = 0;
hb->extraInfo = NULL;

block = (PHeapBlockBasicInfo)heapInfo->Blocks;
if (!block) {
return false;
}

SIZE_T index = hb->index;
do {
if (index > heapInfo->BlockCount) {
return false;
}
hb->dwAddress = block[index].address;
hb->dwSize = block->size;
if (block[index].extra & EXTRA_FLAG) {
PHeapBlockExtraInfo extra = (PHeapBlockExtraInfo)(block[index].extra & ~EXTRA_FLAG);
hb->dwSize -= extra->unusedBytes;
hb->extraInfo = extra;
hb->dwAddress = (WPARAM)hb->dwAddress + extra->granularity;
} else {
hb->dwAddress = (WPARAM)hb->dwAddress + heapInfo->Granularity;
hb->extraInfo = NULL;
}
index++;
} while (block[index].flags & 2);

WPARAM flags = block[hb->index].flags;
UPDATE_FLAGS (hb, flags);

hb->index = index;
return true;
}