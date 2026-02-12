static void skb_put_frags(struct sk_buff *skb, unsigned int hdr_space,
unsigned int length)
{
int i, num_frags;
unsigned int size;


size = min(length, hdr_space);
skb->tail += size;
skb->len += size;
length -= size;

num_frags = skb_shinfo(skb)->nr_frags;
for (i = 0; i < num_frags; i++) {
skb_frag_t *frag = &skb_shinfo(skb)->frags[i];

if (length == 0) {

__skb_frag_unref(frag, false);
--skb_shinfo(skb)->nr_frags;
} else {
size = min(length, (unsigned) PAGE_SIZE);

skb_frag_size_set(frag, size);
skb->data_len += size;
skb->truesize += PAGE_SIZE;
skb->len += size;
length -= size;
}
}
}