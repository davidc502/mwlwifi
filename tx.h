/*
 * Copyright (C) 2006-2015, Marvell International Ltd.
 *
 * This software file (the "File") is distributed by Marvell International
 * Ltd. under the terms of the GNU General Public License Version 2, June 1991
 * (the "License").  You may use, redistribute and/or modify this File in
 * accordance with the terms and conditions of the License, a copy of which
 * is available by writing to the Free Software Foundation, Inc.
 *
 * THE FILE IS DISTRIBUTED AS-IS, WITHOUT WARRANTY OF ANY KIND, AND THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE
 * ARE EXPRESSLY DISCLAIMED.  The License provides additional details about
 * this warranty disclaimer.
 */

/* Description:  This file defines transmit related functions. */

#ifndef _tx_h_
#define _tx_h_

int mwl_tx_init(struct ieee80211_hw *hw);
void mwl_tx_deinit(struct ieee80211_hw *hw);
void mwl_tx_xmit(struct ieee80211_hw *hw,
		 struct ieee80211_tx_control *control,
		 struct sk_buff *skb);
void mwl_tx_done(unsigned long data);
void mwl_tx_flush_amsdu(unsigned long data);

#endif /* _tx_h_ */
