#ifndef TRICUBICINTERPOLATOR_H
#define TRICUBICINTERPOLATOR_H

template<typename RT>
void compute_tricubic_coeffs(RT * __restrict__ a, RT * __restrict__ f)
{
  a[0] = f[21];
  a[1] = -f[20]/3. - f[21]/2. + f[22] - f[23]/6.;
  a[2] = f[20]/2. - f[21] + f[22]/2.;
  a[3] = -f[20]/6. + f[21]/2. - f[22]/2. + f[23]/6.;
  a[4] = -f[17]/3. - f[21]/2. + f[25] - f[29]/6.;
  a[5] = f[16]/9. + f[17]/6. - f[18]/3. + f[19]/18. + f[20]/6. + f[21]/4. - f[22]/2. + f[23]/12. - f[24]/3. - f[25]/2. + f[26] - f[27]/6. + f[28]/18. + f[29]/12. - f[30]/6. + f[31]/36.;
  a[6] = -f[16]/6. + f[17]/3. - f[18]/6. - f[20]/4. + f[21]/2. - f[22]/4. + f[24]/2. - f[25] + f[26]/2. - f[28]/12. + f[29]/6. - f[30]/12.;
  a[7] = f[16]/18. - f[17]/6. + f[18]/6. - f[19]/18. + f[20]/12. - f[21]/4. + f[22]/4. - f[23]/12. - f[24]/6. + f[25]/2. - f[26]/2. + f[27]/6. + f[28]/36. - f[29]/12. + f[30]/12. - f[31]/36.;
  a[8] = f[17]/2. - f[21] + f[25]/2.;
  a[9] = -f[16]/6. - f[17]/4. + f[18]/2. - f[19]/12. + f[20]/3. + f[21]/2. - f[22] + f[23]/6. - f[24]/6. - f[25]/4. + f[26]/2. - f[27]/12.;
  a[10] = f[16]/4. - f[17]/2. + f[18]/4. - f[20]/2. + f[21] - f[22]/2. + f[24]/4. - f[25]/2. + f[26]/4.;
  a[11] = -f[16]/12. + f[17]/4. - f[18]/4. + f[19]/12. + f[20]/6. - f[21]/2. + f[22]/2. - f[23]/6. - f[24]/12. + f[25]/4. - f[26]/4. + f[27]/12.;
  a[12] = -f[17]/6. + f[21]/2. - f[25]/2. + f[29]/6.;
  a[13] = f[16]/18. + f[17]/12. - f[18]/6. + f[19]/36. - f[20]/6. - f[21]/4. + f[22]/2. - f[23]/12. + f[24]/6. + f[25]/4. - f[26]/2. + f[27]/12. - f[28]/18. - f[29]/12. + f[30]/6. - f[31]/36.;
  a[14] = -f[16]/12. + f[17]/6. - f[18]/12. + f[20]/4. - f[21]/2. + f[22]/4. - f[24]/4. + f[25]/2. - f[26]/4. + f[28]/12. - f[29]/6. + f[30]/12.;
  a[15] = f[16]/36. - f[17]/12. + f[18]/12. - f[19]/36. - f[20]/12. + f[21]/4. - f[22]/4. + f[23]/12. + f[24]/12. - f[25]/4. + f[26]/4. - f[27]/12. - f[28]/36. + f[29]/12. - f[30]/12. + f[31]/36.;
  a[16] = -f[5]/3. - f[21]/2. + f[37] - f[53]/6.;
  a[17] = f[4]/9. + f[5]/6. - f[6]/3. + f[7]/18. + f[20]/6. + f[21]/4. - f[22]/2. + f[23]/12. - f[36]/3. - f[37]/2. + f[38] - f[39]/6. + f[52]/18. + f[53]/12. - f[54]/6. + f[55]/36.;
  a[18] = -f[4]/6. + f[5]/3. - f[6]/6. - f[20]/4. + f[21]/2. - f[22]/4. + f[36]/2. - f[37] + f[38]/2. - f[52]/12. + f[53]/6. - f[54]/12.;
  a[19] = f[4]/18. - f[5]/6. + f[6]/6. - f[7]/18. + f[20]/12. - f[21]/4. + f[22]/4. - f[23]/12. - f[36]/6. + f[37]/2. - f[38]/2. + f[39]/6. + f[52]/36. - f[53]/12. + f[54]/12. - f[55]/36.;
  a[20] = f[1]/9. + f[5]/6. - f[9]/3. + f[13]/18. + f[17]/6. + f[21]/4. - f[25]/2. + f[29]/12. - f[33]/3. - f[37]/2. + f[41] - f[45]/6. + f[49]/18. + f[53]/12. - f[57]/6. + f[61]/36.;
  a[21] = -f[0]/27. - f[1]/18. + f[2]/9. - f[3]/54. - f[4]/18. - f[5]/12. + f[6]/6. - f[7]/36. + f[8]/9. + f[9]/6. - f[10]/3. + f[11]/18. - f[12]/54. - f[13]/36. + f[14]/18. - f[15]/108. - f[16]/18. - f[17]/12. + f[18]/6. - f[19]/36. - f[20]/12. - f[21]/8. + f[22]/4. - f[23]/24. + f[24]/6. + f[25]/4. - f[26]/2. + f[27]/12. - f[28]/36. - f[29]/24. + f[30]/12. - f[31]/72. + f[32]/9. + f[33]/6. - f[34]/3. + f[35]/18. + f[36]/6. + f[37]/4. - f[38]/2. + f[39]/12. - f[40]/3. - f[41]/2. + f[42] - f[43]/6. + f[44]/18. + f[45]/12. - f[46]/6. + f[47]/36. - f[48]/54. - f[49]/36. + f[50]/18. - f[51]/108. - f[52]/36. - f[53]/24. + f[54]/12. - f[55]/72. + f[56]/18. + f[57]/12. - f[58]/6. + f[59]/36. - f[60]/108. - f[61]/72. + f[62]/36. - f[63]/216.;
  a[22] = f[0]/18. - f[1]/9. + f[2]/18. + f[4]/12. - f[5]/6. + f[6]/12. - f[8]/6. + f[9]/3. - f[10]/6. + f[12]/36. - f[13]/18. + f[14]/36. + f[16]/12. - f[17]/6. + f[18]/12. + f[20]/8. - f[21]/4. + f[22]/8. - f[24]/4. + f[25]/2. - f[26]/4. + f[28]/24. - f[29]/12. + f[30]/24. - f[32]/6. + f[33]/3. - f[34]/6. - f[36]/4. + f[37]/2. - f[38]/4. + f[40]/2. - f[41] + f[42]/2. - f[44]/12. + f[45]/6. - f[46]/12. + f[48]/36. - f[49]/18. + f[50]/36. + f[52]/24. - f[53]/12. + f[54]/24. - f[56]/12. + f[57]/6. - f[58]/12. + f[60]/72. - f[61]/36. + f[62]/72.;
  a[23] = -f[0]/54. + f[1]/18. - f[2]/18. + f[3]/54. - f[4]/36. + f[5]/12. - f[6]/12. + f[7]/36. + f[8]/18. - f[9]/6. + f[10]/6. - f[11]/18. - f[12]/108. + f[13]/36. - f[14]/36. + f[15]/108. - f[16]/36. + f[17]/12. - f[18]/12. + f[19]/36. - f[20]/24. + f[21]/8. - f[22]/8. + f[23]/24. + f[24]/12. - f[25]/4. + f[26]/4. - f[27]/12. - f[28]/72. + f[29]/24. - f[30]/24. + f[31]/72. + f[32]/18. - f[33]/6. + f[34]/6. - f[35]/18. + f[36]/12. - f[37]/4. + f[38]/4. - f[39]/12. - f[40]/6. + f[41]/2. - f[42]/2. + f[43]/6. + f[44]/36. - f[45]/12. + f[46]/12. - f[47]/36. - f[48]/108. + f[49]/36. - f[50]/36. + f[51]/108. - f[52]/72. + f[53]/24. - f[54]/24. + f[55]/72. + f[56]/36. - f[57]/12. + f[58]/12. - f[59]/36. - f[60]/216. + f[61]/72. - f[62]/72. + f[63]/216.;
  a[24] = -f[1]/6. + f[5]/3. - f[9]/6. - f[17]/4. + f[21]/2. - f[25]/4. + f[33]/2. - f[37] + f[41]/2. - f[49]/12. + f[53]/6. - f[57]/12.;
  a[25] = f[0]/18. + f[1]/12. - f[2]/6. + f[3]/36. - f[4]/9. - f[5]/6. + f[6]/3. - f[7]/18. + f[8]/18. + f[9]/12. - f[10]/6. + f[11]/36. + f[16]/12. + f[17]/8. - f[18]/4. + f[19]/24. - f[20]/6. - f[21]/4. + f[22]/2. - f[23]/12. + f[24]/12. + f[25]/8. - f[26]/4. + f[27]/24. - f[32]/6. - f[33]/4. + f[34]/2. - f[35]/12. + f[36]/3. + f[37]/2. - f[38] + f[39]/6. - f[40]/6. - f[41]/4. + f[42]/2. - f[43]/12. + f[48]/36. + f[49]/24. - f[50]/12. + f[51]/72. - f[52]/18. - f[53]/12. + f[54]/6. - f[55]/36. + f[56]/36. + f[57]/24. - f[58]/12. + f[59]/72.;
  a[26] = -f[0]/12. + f[1]/6. - f[2]/12. + f[4]/6. - f[5]/3. + f[6]/6. - f[8]/12. + f[9]/6. - f[10]/12. - f[16]/8. + f[17]/4. - f[18]/8. + f[20]/4. - f[21]/2. + f[22]/4. - f[24]/8. + f[25]/4. - f[26]/8. + f[32]/4. - f[33]/2. + f[34]/4. - f[36]/2. + f[37] - f[38]/2. + f[40]/4. - f[41]/2. + f[42]/4. - f[48]/24. + f[49]/12. - f[50]/24. + f[52]/12. - f[53]/6. + f[54]/12. - f[56]/24. + f[57]/12. - f[58]/24.;
  a[27] = f[0]/36. - f[1]/12. + f[2]/12. - f[3]/36. - f[4]/18. + f[5]/6. - f[6]/6. + f[7]/18. + f[8]/36. - f[9]/12. + f[10]/12. - f[11]/36. + f[16]/24. - f[17]/8. + f[18]/8. - f[19]/24. - f[20]/12. + f[21]/4. - f[22]/4. + f[23]/12. + f[24]/24. - f[25]/8. + f[26]/8. - f[27]/24. - f[32]/12. + f[33]/4. - f[34]/4. + f[35]/12. + f[36]/6. - f[37]/2. + f[38]/2. - f[39]/6. - f[40]/12. + f[41]/4. - f[42]/4. + f[43]/12. + f[48]/72. - f[49]/24. + f[50]/24. - f[51]/72. - f[52]/36. + f[53]/12. - f[54]/12. + f[55]/36. + f[56]/72. - f[57]/24. + f[58]/24. - f[59]/72.;
  a[28] = f[1]/18. - f[5]/6. + f[9]/6. - f[13]/18. + f[17]/12. - f[21]/4. + f[25]/4. - f[29]/12. - f[33]/6. + f[37]/2. - f[41]/2. + f[45]/6. + f[49]/36. - f[53]/12. + f[57]/12. - f[61]/36.;
  a[29] = -f[0]/54. - f[1]/36. + f[2]/18. - f[3]/108. + f[4]/18. + f[5]/12. - f[6]/6. + f[7]/36. - f[8]/18. - f[9]/12. + f[10]/6. - f[11]/36. + f[12]/54. + f[13]/36. - f[14]/18. + f[15]/108. - f[16]/36. - f[17]/24. + f[18]/12. - f[19]/72. + f[20]/12. + f[21]/8. - f[22]/4. + f[23]/24. - f[24]/12. - f[25]/8. + f[26]/4. - f[27]/24. + f[28]/36. + f[29]/24. - f[30]/12. + f[31]/72. + f[32]/18. + f[33]/12. - f[34]/6. + f[35]/36. - f[36]/6. - f[37]/4. + f[38]/2. - f[39]/12. + f[40]/6. + f[41]/4. - f[42]/2. + f[43]/12. - f[44]/18. - f[45]/12. + f[46]/6. - f[47]/36. - f[48]/108. - f[49]/72. + f[50]/36. - f[51]/216. + f[52]/36. + f[53]/24. - f[54]/12. + f[55]/72. - f[56]/36. - f[57]/24. + f[58]/12. - f[59]/72. + f[60]/108. + f[61]/72. - f[62]/36. + f[63]/216.;
  a[30] = f[0]/36. - f[1]/18. + f[2]/36. - f[4]/12. + f[5]/6. - f[6]/12. + f[8]/12. - f[9]/6. + f[10]/12. - f[12]/36. + f[13]/18. - f[14]/36. + f[16]/24. - f[17]/12. + f[18]/24. - f[20]/8. + f[21]/4. - f[22]/8. + f[24]/8. - f[25]/4. + f[26]/8. - f[28]/24. + f[29]/12. - f[30]/24. - f[32]/12. + f[33]/6. - f[34]/12. + f[36]/4. - f[37]/2. + f[38]/4. - f[40]/4. + f[41]/2. - f[42]/4. + f[44]/12. - f[45]/6. + f[46]/12. + f[48]/72. - f[49]/36. + f[50]/72. - f[52]/24. + f[53]/12. - f[54]/24. + f[56]/24. - f[57]/12. + f[58]/24. - f[60]/72. + f[61]/36. - f[62]/72.;
  a[31] = -f[0]/108. + f[1]/36. - f[2]/36. + f[3]/108. + f[4]/36. - f[5]/12. + f[6]/12. - f[7]/36. - f[8]/36. + f[9]/12. - f[10]/12. + f[11]/36. + f[12]/108. - f[13]/36. + f[14]/36. - f[15]/108. - f[16]/72. + f[17]/24. - f[18]/24. + f[19]/72. + f[20]/24. - f[21]/8. + f[22]/8. - f[23]/24. - f[24]/24. + f[25]/8. - f[26]/8. + f[27]/24. + f[28]/72. - f[29]/24. + f[30]/24. - f[31]/72. + f[32]/36. - f[33]/12. + f[34]/12. - f[35]/36. - f[36]/12. + f[37]/4. - f[38]/4. + f[39]/12. + f[40]/12. - f[41]/4. + f[42]/4. - f[43]/12. - f[44]/36. + f[45]/12. - f[46]/12. + f[47]/36. - f[48]/216. + f[49]/72. - f[50]/72. + f[51]/216. + f[52]/72. - f[53]/24. + f[54]/24. - f[55]/72. - f[56]/72. + f[57]/24. - f[58]/24. + f[59]/72. + f[60]/216. - f[61]/72. + f[62]/72. - f[63]/216.;
  a[32] = f[5]/2. - f[21] + f[37]/2.;
  a[33] = -f[4]/6. - f[5]/4. + f[6]/2. - f[7]/12. + f[20]/3. + f[21]/2. - f[22] + f[23]/6. - f[36]/6. - f[37]/4. + f[38]/2. - f[39]/12.;
  a[34] = f[4]/4. - f[5]/2. + f[6]/4. - f[20]/2. + f[21] - f[22]/2. + f[36]/4. - f[37]/2. + f[38]/4.;
  a[35] = -f[4]/12. + f[5]/4. - f[6]/4. + f[7]/12. + f[20]/6. - f[21]/2. + f[22]/2. - f[23]/6. - f[36]/12. + f[37]/4. - f[38]/4. + f[39]/12.;
  a[36] = -f[1]/6. - f[5]/4. + f[9]/2. - f[13]/12. + f[17]/3. + f[21]/2. - f[25] + f[29]/6. - f[33]/6. - f[37]/4. + f[41]/2. - f[45]/12.;
  a[37] = f[0]/18. + f[1]/12. - f[2]/6. + f[3]/36. + f[4]/12. + f[5]/8. - f[6]/4. + f[7]/24. - f[8]/6. - f[9]/4. + f[10]/2. - f[11]/12. + f[12]/36. + f[13]/24. - f[14]/12. + f[15]/72. - f[16]/9. - f[17]/6. + f[18]/3. - f[19]/18. - f[20]/6. - f[21]/4. + f[22]/2. - f[23]/12. + f[24]/3. + f[25]/2. - f[26] + f[27]/6. - f[28]/18. - f[29]/12. + f[30]/6. - f[31]/36. + f[32]/18. + f[33]/12. - f[34]/6. + f[35]/36. + f[36]/12. + f[37]/8. - f[38]/4. + f[39]/24. - f[40]/6. - f[41]/4. + f[42]/2. - f[43]/12. + f[44]/36. + f[45]/24. - f[46]/12. + f[47]/72.;
  a[38] = -f[0]/12. + f[1]/6. - f[2]/12. - f[4]/8. + f[5]/4. - f[6]/8. + f[8]/4. - f[9]/2. + f[10]/4. - f[12]/24. + f[13]/12. - f[14]/24. + f[16]/6. - f[17]/3. + f[18]/6. + f[20]/4. - f[21]/2. + f[22]/4. - f[24]/2. + f[25] - f[26]/2. + f[28]/12. - f[29]/6. + f[30]/12. - f[32]/12. + f[33]/6. - f[34]/12. - f[36]/8. + f[37]/4. - f[38]/8. + f[40]/4. - f[41]/2. + f[42]/4. - f[44]/24. + f[45]/12. - f[46]/24.;
  a[39] = f[0]/36. - f[1]/12. + f[2]/12. - f[3]/36. + f[4]/24. - f[5]/8. + f[6]/8. - f[7]/24. - f[8]/12. + f[9]/4. - f[10]/4. + f[11]/12. + f[12]/72. - f[13]/24. + f[14]/24. - f[15]/72. - f[16]/18. + f[17]/6. - f[18]/6. + f[19]/18. - f[20]/12. + f[21]/4. - f[22]/4. + f[23]/12. + f[24]/6. - f[25]/2. + f[26]/2. - f[27]/6. - f[28]/36. + f[29]/12. - f[30]/12. + f[31]/36. + f[32]/36. - f[33]/12. + f[34]/12. - f[35]/36. + f[36]/24. - f[37]/8. + f[38]/8. - f[39]/24. - f[40]/12. + f[41]/4. - f[42]/4. + f[43]/12. + f[44]/72. - f[45]/24. + f[46]/24. - f[47]/72.;
  a[40] = f[1]/4. - f[5]/2. + f[9]/4. - f[17]/2. + f[21] - f[25]/2. + f[33]/4. - f[37]/2. + f[41]/4.;
  a[41] = -f[0]/12. - f[1]/8. + f[2]/4. - f[3]/24. + f[4]/6. + f[5]/4. - f[6]/2. + f[7]/12. - f[8]/12. - f[9]/8. + f[10]/4. - f[11]/24. + f[16]/6. + f[17]/4. - f[18]/2. + f[19]/12. - f[20]/3. - f[21]/2. + f[22] - f[23]/6. + f[24]/6. + f[25]/4. - f[26]/2. + f[27]/12. - f[32]/12. - f[33]/8. + f[34]/4. - f[35]/24. + f[36]/6. + f[37]/4. - f[38]/2. + f[39]/12. - f[40]/12. - f[41]/8. + f[42]/4. - f[43]/24.;
  a[42] = f[0]/8. - f[1]/4. + f[2]/8. - f[4]/4. + f[5]/2. - f[6]/4. + f[8]/8. - f[9]/4. + f[10]/8. - f[16]/4. + f[17]/2. - f[18]/4. + f[20]/2. - f[21] + f[22]/2. - f[24]/4. + f[25]/2. - f[26]/4. + f[32]/8. - f[33]/4. + f[34]/8. - f[36]/4. + f[37]/2. - f[38]/4. + f[40]/8. - f[41]/4. + f[42]/8.;
  a[43] = -f[0]/24. + f[1]/8. - f[2]/8. + f[3]/24. + f[4]/12. - f[5]/4. + f[6]/4. - f[7]/12. - f[8]/24. + f[9]/8. - f[10]/8. + f[11]/24. + f[16]/12. - f[17]/4. + f[18]/4. - f[19]/12. - f[20]/6. + f[21]/2. - f[22]/2. + f[23]/6. + f[24]/12. - f[25]/4. + f[26]/4. - f[27]/12. - f[32]/24. + f[33]/8. - f[34]/8. + f[35]/24. + f[36]/12. - f[37]/4. + f[38]/4. - f[39]/12. - f[40]/24. + f[41]/8. - f[42]/8. + f[43]/24.;
  a[44] = -f[1]/12. + f[5]/4. - f[9]/4. + f[13]/12. + f[17]/6. - f[21]/2. + f[25]/2. - f[29]/6. - f[33]/12. + f[37]/4. - f[41]/4. + f[45]/12.;
  a[45] = f[0]/36. + f[1]/24. - f[2]/12. + f[3]/72. - f[4]/12. - f[5]/8. + f[6]/4. - f[7]/24. + f[8]/12. + f[9]/8. - f[10]/4. + f[11]/24. - f[12]/36. - f[13]/24. + f[14]/12. - f[15]/72. - f[16]/18. - f[17]/12. + f[18]/6. - f[19]/36. + f[20]/6. + f[21]/4. - f[22]/2. + f[23]/12. - f[24]/6. - f[25]/4. + f[26]/2. - f[27]/12. + f[28]/18. + f[29]/12. - f[30]/6. + f[31]/36. + f[32]/36. + f[33]/24. - f[34]/12. + f[35]/72. - f[36]/12. - f[37]/8. + f[38]/4. - f[39]/24. + f[40]/12. + f[41]/8. - f[42]/4. + f[43]/24. - f[44]/36. - f[45]/24. + f[46]/12. - f[47]/72.;
  a[46] = -f[0]/24. + f[1]/12. - f[2]/24. + f[4]/8. - f[5]/4. + f[6]/8. - f[8]/8. + f[9]/4. - f[10]/8. + f[12]/24. - f[13]/12. + f[14]/24. + f[16]/12. - f[17]/6. + f[18]/12. - f[20]/4. + f[21]/2. - f[22]/4. + f[24]/4. - f[25]/2. + f[26]/4. - f[28]/12. + f[29]/6. - f[30]/12. - f[32]/24. + f[33]/12. - f[34]/24. + f[36]/8. - f[37]/4. + f[38]/8. - f[40]/8. + f[41]/4. - f[42]/8. + f[44]/24. - f[45]/12. + f[46]/24.;
  a[47] = f[0]/72. - f[1]/24. + f[2]/24. - f[3]/72. - f[4]/24. + f[5]/8. - f[6]/8. + f[7]/24. + f[8]/24. - f[9]/8. + f[10]/8. - f[11]/24. - f[12]/72. + f[13]/24. - f[14]/24. + f[15]/72. - f[16]/36. + f[17]/12. - f[18]/12. + f[19]/36. + f[20]/12. - f[21]/4. + f[22]/4. - f[23]/12. - f[24]/12. + f[25]/4. - f[26]/4. + f[27]/12. + f[28]/36. - f[29]/12. + f[30]/12. - f[31]/36. + f[32]/72. - f[33]/24. + f[34]/24. - f[35]/72. - f[36]/24. + f[37]/8. - f[38]/8. + f[39]/24. + f[40]/24. - f[41]/8. + f[42]/8. - f[43]/24. - f[44]/72. + f[45]/24. - f[46]/24. + f[47]/72.;
  a[48] = -f[5]/6. + f[21]/2. - f[37]/2. + f[53]/6.;
  a[49] = f[4]/18. + f[5]/12. - f[6]/6. + f[7]/36. - f[20]/6. - f[21]/4. + f[22]/2. - f[23]/12. + f[36]/6. + f[37]/4. - f[38]/2. + f[39]/12. - f[52]/18. - f[53]/12. + f[54]/6. - f[55]/36.;
  a[50] = -f[4]/12. + f[5]/6. - f[6]/12. + f[20]/4. - f[21]/2. + f[22]/4. - f[36]/4. + f[37]/2. - f[38]/4. + f[52]/12. - f[53]/6. + f[54]/12.;
  a[51] = f[4]/36. - f[5]/12. + f[6]/12. - f[7]/36. - f[20]/12. + f[21]/4. - f[22]/4. + f[23]/12. + f[36]/12. - f[37]/4. + f[38]/4. - f[39]/12. - f[52]/36. + f[53]/12. - f[54]/12. + f[55]/36.;
  a[52] = f[1]/18. + f[5]/12. - f[9]/6. + f[13]/36. - f[17]/6. - f[21]/4. + f[25]/2. - f[29]/12. + f[33]/6. + f[37]/4. - f[41]/2. + f[45]/12. - f[49]/18. - f[53]/12. + f[57]/6. - f[61]/36.;
  a[53] = -f[0]/54. - f[1]/36. + f[2]/18. - f[3]/108. - f[4]/36. - f[5]/24. + f[6]/12. - f[7]/72. + f[8]/18. + f[9]/12. - f[10]/6. + f[11]/36. - f[12]/108. - f[13]/72. + f[14]/36. - f[15]/216. + f[16]/18. + f[17]/12. - f[18]/6. + f[19]/36. + f[20]/12. + f[21]/8. - f[22]/4. + f[23]/24. - f[24]/6. - f[25]/4. + f[26]/2. - f[27]/12. + f[28]/36. + f[29]/24. - f[30]/12. + f[31]/72. - f[32]/18. - f[33]/12. + f[34]/6. - f[35]/36. - f[36]/12. - f[37]/8. + f[38]/4. - f[39]/24. + f[40]/6. + f[41]/4. - f[42]/2. + f[43]/12. - f[44]/36. - f[45]/24. + f[46]/12. - f[47]/72. + f[48]/54. + f[49]/36. - f[50]/18. + f[51]/108. + f[52]/36. + f[53]/24. - f[54]/12. + f[55]/72. - f[56]/18. - f[57]/12. + f[58]/6. - f[59]/36. + f[60]/108. + f[61]/72. - f[62]/36. + f[63]/216.;
  a[54] = f[0]/36. - f[1]/18. + f[2]/36. + f[4]/24. - f[5]/12. + f[6]/24. - f[8]/12. + f[9]/6. - f[10]/12. + f[12]/72. - f[13]/36. + f[14]/72. - f[16]/12. + f[17]/6. - f[18]/12. - f[20]/8. + f[21]/4. - f[22]/8. + f[24]/4. - f[25]/2. + f[26]/4. - f[28]/24. + f[29]/12. - f[30]/24. + f[32]/12. - f[33]/6. + f[34]/12. + f[36]/8. - f[37]/4. + f[38]/8. - f[40]/4. + f[41]/2. - f[42]/4. + f[44]/24. - f[45]/12. + f[46]/24. - f[48]/36. + f[49]/18. - f[50]/36. - f[52]/24. + f[53]/12. - f[54]/24. + f[56]/12. - f[57]/6. + f[58]/12. - f[60]/72. + f[61]/36. - f[62]/72.;
  a[55] = -f[0]/108. + f[1]/36. - f[2]/36. + f[3]/108. - f[4]/72. + f[5]/24. - f[6]/24. + f[7]/72. + f[8]/36. - f[9]/12. + f[10]/12. - f[11]/36. - f[12]/216. + f[13]/72. - f[14]/72. + f[15]/216. + f[16]/36. - f[17]/12. + f[18]/12. - f[19]/36. + f[20]/24. - f[21]/8. + f[22]/8. - f[23]/24. - f[24]/12. + f[25]/4. - f[26]/4. + f[27]/12. + f[28]/72. - f[29]/24. + f[30]/24. - f[31]/72. - f[32]/36. + f[33]/12. - f[34]/12. + f[35]/36. - f[36]/24. + f[37]/8. - f[38]/8. + f[39]/24. + f[40]/12. - f[41]/4. + f[42]/4. - f[43]/12. - f[44]/72. + f[45]/24. - f[46]/24. + f[47]/72. + f[48]/108. - f[49]/36. + f[50]/36. - f[51]/108. + f[52]/72. - f[53]/24. + f[54]/24. - f[55]/72. - f[56]/36. + f[57]/12. - f[58]/12. + f[59]/36. + f[60]/216. - f[61]/72. + f[62]/72. - f[63]/216.;
  a[56] = -f[1]/12. + f[5]/6. - f[9]/12. + f[17]/4. - f[21]/2. + f[25]/4. - f[33]/4. + f[37]/2. - f[41]/4. + f[49]/12. - f[53]/6. + f[57]/12.;
  a[57] = f[0]/36. + f[1]/24. - f[2]/12. + f[3]/72. - f[4]/18. - f[5]/12. + f[6]/6. - f[7]/36. + f[8]/36. + f[9]/24. - f[10]/12. + f[11]/72. - f[16]/12. - f[17]/8. + f[18]/4. - f[19]/24. + f[20]/6. + f[21]/4. - f[22]/2. + f[23]/12. - f[24]/12. - f[25]/8. + f[26]/4. - f[27]/24. + f[32]/12. + f[33]/8. - f[34]/4. + f[35]/24. - f[36]/6. - f[37]/4. + f[38]/2. - f[39]/12. + f[40]/12. + f[41]/8. - f[42]/4. + f[43]/24. - f[48]/36. - f[49]/24. + f[50]/12. - f[51]/72. + f[52]/18. + f[53]/12. - f[54]/6. + f[55]/36. - f[56]/36. - f[57]/24. + f[58]/12. - f[59]/72.;
  a[58] = -f[0]/24. + f[1]/12. - f[2]/24. + f[4]/12. - f[5]/6. + f[6]/12. - f[8]/24. + f[9]/12. - f[10]/24. + f[16]/8. - f[17]/4. + f[18]/8. - f[20]/4. + f[21]/2. - f[22]/4. + f[24]/8. - f[25]/4. + f[26]/8. - f[32]/8. + f[33]/4. - f[34]/8. + f[36]/4. - f[37]/2. + f[38]/4. - f[40]/8. + f[41]/4. - f[42]/8. + f[48]/24. - f[49]/12. + f[50]/24. - f[52]/12. + f[53]/6. - f[54]/12. + f[56]/24. - f[57]/12. + f[58]/24.;
  a[59] = f[0]/72. - f[1]/24. + f[2]/24. - f[3]/72. - f[4]/36. + f[5]/12. - f[6]/12. + f[7]/36. + f[8]/72. - f[9]/24. + f[10]/24. - f[11]/72. - f[16]/24. + f[17]/8. - f[18]/8. + f[19]/24. + f[20]/12. - f[21]/4. + f[22]/4. - f[23]/12. - f[24]/24. + f[25]/8. - f[26]/8. + f[27]/24. + f[32]/24. - f[33]/8. + f[34]/8. - f[35]/24. - f[36]/12. + f[37]/4. - f[38]/4. + f[39]/12. + f[40]/24. - f[41]/8. + f[42]/8. - f[43]/24. - f[48]/72. + f[49]/24. - f[50]/24. + f[51]/72. + f[52]/36. - f[53]/12. + f[54]/12. - f[55]/36. - f[56]/72. + f[57]/24. - f[58]/24. + f[59]/72.;
  a[60] = f[1]/36. - f[5]/12. + f[9]/12. - f[13]/36. - f[17]/12. + f[21]/4. - f[25]/4. + f[29]/12. + f[33]/12. - f[37]/4. + f[41]/4. - f[45]/12. - f[49]/36. + f[53]/12. - f[57]/12. + f[61]/36.;
  a[61] = -f[0]/108. - f[1]/72. + f[2]/36. - f[3]/216. + f[4]/36. + f[5]/24. - f[6]/12. + f[7]/72. - f[8]/36. - f[9]/24. + f[10]/12. - f[11]/72. + f[12]/108. + f[13]/72. - f[14]/36. + f[15]/216. + f[16]/36. + f[17]/24. - f[18]/12. + f[19]/72. - f[20]/12. - f[21]/8. + f[22]/4. - f[23]/24. + f[24]/12. + f[25]/8. - f[26]/4. + f[27]/24. - f[28]/36. - f[29]/24. + f[30]/12. - f[31]/72. - f[32]/36. - f[33]/24. + f[34]/12. - f[35]/72. + f[36]/12. + f[37]/8. - f[38]/4. + f[39]/24. - f[40]/12. - f[41]/8. + f[42]/4. - f[43]/24. + f[44]/36. + f[45]/24. - f[46]/12. + f[47]/72. + f[48]/108. + f[49]/72. - f[50]/36. + f[51]/216. - f[52]/36. - f[53]/24. + f[54]/12. - f[55]/72. + f[56]/36. + f[57]/24. - f[58]/12. + f[59]/72. - f[60]/108. - f[61]/72. + f[62]/36. - f[63]/216.;
  a[62] = f[0]/72. - f[1]/36. + f[2]/72. - f[4]/24. + f[5]/12. - f[6]/24. + f[8]/24. - f[9]/12. + f[10]/24. - f[12]/72. + f[13]/36. - f[14]/72. - f[16]/24. + f[17]/12. - f[18]/24. + f[20]/8. - f[21]/4. + f[22]/8. - f[24]/8. + f[25]/4. - f[26]/8. + f[28]/24. - f[29]/12. + f[30]/24. + f[32]/24. - f[33]/12. + f[34]/24. - f[36]/8. + f[37]/4. - f[38]/8. + f[40]/8. - f[41]/4. + f[42]/8. - f[44]/24. + f[45]/12. - f[46]/24. - f[48]/72. + f[49]/36. - f[50]/72. + f[52]/24. - f[53]/12. + f[54]/24. - f[56]/24. + f[57]/12. - f[58]/24. + f[60]/72. - f[61]/36. + f[62]/72.;
  a[63] = -f[0]/216. + f[1]/72. - f[2]/72. + f[3]/216. + f[4]/72. - f[5]/24. + f[6]/24. - f[7]/72. - f[8]/72. + f[9]/24. - f[10]/24. + f[11]/72. + f[12]/216. - f[13]/72. + f[14]/72. - f[15]/216. + f[16]/72. - f[17]/24. + f[18]/24. - f[19]/72. - f[20]/24. + f[21]/8. - f[22]/8. + f[23]/24. + f[24]/24. - f[25]/8. + f[26]/8. - f[27]/24. - f[28]/72. + f[29]/24. - f[30]/24. + f[31]/72. - f[32]/72. + f[33]/24. - f[34]/24. + f[35]/72. + f[36]/24. - f[37]/8. + f[38]/8. - f[39]/24. - f[40]/24. + f[41]/8. - f[42]/8. + f[43]/24. + f[44]/72. - f[45]/24. + f[46]/24. - f[47]/72. + f[48]/216. - f[49]/72. + f[50]/72. - f[51]/216. - f[52]/72. + f[53]/24. - f[54]/24. + f[55]/72. + f[56]/72. - f[57]/24. + f[58]/24. - f[59]/72. - f[60]/216. + f[61]/72. - f[62]/72. + f[63]/216.;
}

template<typename RT>
RT evaluate_interpolation(RT * a, RT x, RT y, RT z)
{
#define P2(x) x*x
#define P3(x) x*x*x

  return a[0] + a[1]*z + a[2]*P2(z) + a[3]*P3(z) + a[4]*y + a[5]*y*z
    + a[6]*y*P2(z) + a[7]*y*P3(z) + a[8]*P2(y) + a[9]*P2(y)*z + a[10]*P2(y)*P2(z)
    + a[11]*P2(y)*P3(z) + a[12]*P3(y) + a[13]*P3(y)*z + a[14]*P3(y)*P2(z)
    + a[15]*P3(y)*P3(z) + a[16]*x + a[17]*x*z + a[18]*x*P2(z) + a[19]*x*P3(z)
    + a[20]*x*y + a[21]*x*y*z + a[22]*x*y*P2(z) + a[23]*x*y*P3(z) + a[24]*x*P2(y)
    + a[25]*x*P2(y)*z + a[26]*x*P2(y)*P2(z) + a[27]*x*P2(y)*P3(z) + a[28]*x*P3(y)
    + a[29]*x*P3(y)*z + a[30]*x*P3(y)*P2(z) + a[31]*x*P3(y)*P3(z) + a[32]*P2(x)
    + a[33]*P2(x)*z + a[34]*P2(x)*P2(z) + a[35]*P2(x)*P3(z) + a[36]*P2(x)*y
    + a[37]*P2(x)*y*z + a[38]*P2(x)*y*P2(z) + a[39]*P2(x)*y*P3(z) + a[40]*P2(x)*P2(y)
    + a[41]*P2(x)*P2(y)*z + a[42]*P2(x)*P2(y)*P2(z) + a[43]*P2(x)*P2(y)*P3(z)
    + a[44]*P2(x)*P3(y) + a[45]*P2(x)*P3(y)*z + a[46]*P2(x)*P3(y)*P2(z)
    + a[47]*P2(x)*P3(y)*P3(z) + a[48]*P3(x) + a[49]*P3(x)*z + a[50]*P3(x)*P2(z)
    + a[51]*P3(x)*P3(z) + a[52]*P3(x)*y + a[53]*P3(x)*y*z + a[54]*P3(x)*y*P2(z)
    + a[55]*P3(x)*y*P3(z) + a[56]*P3(x)*P2(y) + a[57]*P3(x)*P2(y)*z
    + a[58]*P3(x)*P2(y)*P2(z) + a[59]*P3(x)*P2(y)*P3(z) + a[60]*P3(x)*P3(y)
    + a[61]*P3(x)*P3(y)*z + a[62]*P3(x)*P3(y)*P2(z) + a[63]*P3(x)*P3(y)*P3(z);
}

#endif
