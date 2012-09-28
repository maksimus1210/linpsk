//////////////////////////////////////////////////////////////////////
// Copyright 1999.    Moe Wheatley AE4JY  <ae4jy@mindspring.com>
//
//This program is free software; you can redistribute it and/or
//modify it under the terms of the GNU General Public License
//as published by the Free Software Foundation; either version 2
//of the License, or any later version.
//
//This program is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.
//
//You should have received a copy of the GNU General Public License
//along with this program; if not, write to the Free Software
//Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
//
//////////////////////////////////////////////////////////////////////
//

#define DEC2_LPFIR_LENGTH 45

//  Design method: Parks-McClellan method
//  Number of taps  =  45 


//  Number of bands =  2 
//  Band     Lower       Upper       Value      Weight
//            edge        edge
//   1         0.0       .018         1.0         1
//   2         .25        .5        .00007       100
/** 
const double Dec2LPCoef[DEC2_LPFIR_LENGTH ] = {
  0.00041063658,
  0.00040020444,
  -0.0014690721,
  -0.0046244896,
  -0.0048873265,
  0.00057075169,
   0.0064849067,
   0.0034999371,
  -0.0072838126,
   -0.010484073,
   0.0032609865,
    0.017545124,
   0.0073308048,
    -0.02042501,
   -0.024496589,
    0.013398095,
    0.045762697,
    0.010940839,
   -0.066633815,
   -0.069373038,
    0.081944411,
     0.30510648,
     0.41246774,
     0.30510648,
    0.081944411,
   -0.069373038,
   -0.066633815,
    0.010940839,
    0.045762697,
    0.013398095,
   -0.024496589,
    -0.02042501,
   0.0073308048,
    0.017545124,
   0.0032609865,
   -0.010484073,
  -0.0072838126,
   0.0034999371,
   0.0064849067,
  0.00057075169,
  -0.0048873265,
  -0.0046244896,
  -0.0014690721,
  0.00040020444,
  0.00041063658
};
**/
const double Dec2LPCoef[DEC2_LPFIR_LENGTH ] = {
  0.0041063658,
  0.0040020444,
  -0.014690721,
  -0.046244896,
  -0.048873265,
  0.0057075169,
   0.064849067,
   0.034999371,
  -0.072838126,
   -0.10484073,
   0.032609865,
    0.17545124,
   0.073308048,
    -0.2042501,
   -0.24496589,
    0.13398095,
    0.45762697,
    0.10940839,
   -0.66633815,
   -0.69373038,
    0.81944411,
     3.0510648,
     4.1246774,
     3.0510648,
    0.81944411,
   -0.69373038,
   -0.66633815,
    0.10940839,
    0.45762697,
    0.13398095,
   -0.24496589,
    -0.2042501,
   0.073308048,
    0.17545124,
   0.032609865,
   -0.10484073,
  -0.072838126,
   0.034999371,
   0.064849067,
  0.0057075169,
  -0.048873265,
  -0.046244896,
  -0.014690721,
  0.0040020444,
  0.0041063658
};

#define DEC3_LPFIR_LENGTH 27
//  Design method: Parks-McClellan method
//  Number of taps  =  27 
//  Number of bands =  2 
//  Band     Lower       Upper       Value      Weight
//            edge        edge
//   1         0.0       .017         1.0         1
//   2         .166666    .5        .00002       10 
 
const double Dec3LPCoef[DEC3_LPFIR_LENGTH ] = {
 /**
 -0.00028892587,
  -0.0012431135,
  -0.0033184787,
  -0.0065777314,
   -0.010172455,
   -0.011982908,
  -0.0087991708,
   0.0027573615,
    0.024743232,
     0.05640933,
     0.09349033,
     0.12882953,
     0.15434156,
     0.16367159,
     0.15434156,
     0.12882953,
     0.09349033,
     0.05640933,
    0.024743232,
   0.0027573615,
  -0.0087991708,
   -0.011982908,
   -0.010172455,
  -0.0065777314,
  -0.0033184787,
  -0.0012431135,
 -0.00028892587
 **/
  -0.0028892587,
  -0.012431135,
  -0.033184787,
  -0.065777314,
   -0.10172455,
   -0.11982908,
  -0.087991708,
   0.027573615,
    0.24743232,
     0.5640933,
     0.9349033,
     1.2882953,
     1.5434156,
     1.6367159,
     1.5434156,
     1.2882953,
     0.9349033,
     0.5640933,
    0.24743232,
   0.027573615,
  -0.087991708,
   -0.11982908,
   -0.10172455,
  -0.065777314,
  -0.033184787,
  -0.012431135,
 -0.0028892587
};


#if 1
#define BITFIR_LENGTH 79
const double BitFirCoef[BITFIR_LENGTH] = { // 16 Hz bw LP filter for data recovery
 3.8780526e-005,
 -0.00043373927,
 -0.00057165992,
 -0.00090520784,
    -0.00135488,
  -0.0019236412,
  -0.0026169379,
  -0.0034345504,
  -0.0043691791,
  -0.0054046365,
  -0.0065156454,
  -0.0076664838,
  -0.0088120663,
  -0.0098975766,
   -0.010860162,
   -0.011630504,
   -0.012135381,
   -0.012299909,
   -0.012051495,
   -0.011323131,
   -0.010057012,
  -0.0082078785,
  -0.0057472009,
  -0.0026644814,
   0.0010286189,
   0.0052985616,
    0.010087661,
    0.015316424,
    0.020883009,
    0.026668057,
    0.032536465,
    0.038341551,
    0.043932665,
    0.049156847,
    0.053867496,
    0.057929091,
    0.061222375,
    0.063648481,
    0.065134147,
    0.065654404,
    0.065134147,
    0.063648481,
    0.061222375,
    0.057929091,
    0.053867496,
    0.049156847,
    0.043932665,
    0.038341551,
    0.032536465,
    0.026668057,
    0.020883009,
    0.015316424,
    0.010087661,
   0.0052985616,
   0.0010286189,
  -0.0026644814,
  -0.0057472009,
  -0.0082078785,
   -0.010057012,
   -0.011323131,
   -0.012051495,
   -0.012299909,
   -0.012135381,
   -0.011630504,
   -0.010860162,
  -0.0098975766,
  -0.0088120663,
  -0.0076664838,
  -0.0065156454,
  -0.0054046365,
  -0.0043691791,
  -0.0034345504,
  -0.0026169379,
  -0.0019236412,
    -0.00135488,
 -0.00090520784,
 -0.00057165992,
 -0.00043373927,
 3.8780526e-005

};
#else
#define BITFIR_LENGTH 79
const double BitFirCoef[BITFIR_LENGTH] = { // 16 Hz bw Martinez LP filter for data recovery
	-3.567202e-004,
	-4.542733e-004,
	-6.506069e-004,
	-9.477393e-004,
	-1.347645e-003,
	-1.851098e-003,
	-2.456292e-003,
	-3.157368e-003,
	-3.942984e-003,
	-4.795060e-003,
	-5.687838e-003,
	-6.587355e-003,
	-7.451419e-003,
	-8.230144e-003,
	-8.867057e-003,
	-9.300761e-003,
	-9.467104e-003,
	-9.301771e-003,
	-8.743191e-003,
	-7.735620e-003,
	-6.232267e-003,
	-4.198302e-003,
	-1.613592e-003,
	1.524992e-003,
	5.201817e-003,
	9.381422e-003,
	1.400822e-002,
	1.900705e-002,
	2.428456e-002,
	2.973155e-002,
	3.522593e-002,
	4.063663e-002,
	4.582786e-002,
	5.066388e-002,
	5.501399e-002,
	5.875741e-002,
	6.178797e-002,
	6.401828e-002,
	6.538327e-002,
	6.584278e-002,
	6.538327e-002,
	6.401828e-002,
	6.178797e-002,
	5.875741e-002,
	5.501399e-002,
	5.066388e-002,
	4.582786e-002,
	4.063663e-002,
	3.522593e-002,
	2.973155e-002,
	2.428456e-002,
	1.900705e-002,
	1.400822e-002,
	9.381422e-003,
	5.201817e-003,
	1.524992e-003,
	-1.613592e-003,
	-4.198302e-003,
	-6.232267e-003,
	-7.735620e-003,
	-8.743191e-003,
	-9.301771e-003,
	-9.467104e-003,
	-9.300761e-003,
	-8.867057e-003,
	-8.230144e-003,
	-7.451419e-003,
	-6.587355e-003,
	-5.687838e-003,
	-4.795060e-003,
	-3.942984e-003,
	-3.157368e-003,
	-2.456292e-003,
	-1.851098e-003,
	-1.347645e-003,
	-9.477393e-004,
	-6.506069e-004,
	-4.542733e-004,
	-3.567202e-004
};
#endif


//  Filter type:   Multiband filter
//  Design method: Parks-McClellan method
//  Number of taps  =  79 
//  Number of bands =  2 
//  Band   Lower       Upper       Value      Weight
//         edge        edge
//
//	1       0.0        .04           1.         1.
//	2        .07       .5          .00001      30.
const double FreqFirCoef[BITFIR_LENGTH] = { // 31.25 Hz bw LP filter for frequency error
 -0.00088970285,
 -0.00095069429,
   -0.001333873,
  -0.0016964002,
  -0.0019708148,
  -0.0020817198,
  -0.0019538899,
  -0.0015246954,
 -0.00075521572,
  0.00035617931,
   0.0017654549,
   0.0033764437,
    0.005044567,
    0.006582916,
   0.0077790286,
    0.008414395,
   0.0082949352,
    0.007277045,
   0.0052959804,
   0.0023882104,
  -0.0012898644,
  -0.0054642152,
  -0.0097488405,
   -0.013668084,
    -0.01669712,
   -0.018301826,
   -0.017996533,
   -0.015393401,
   -0.010253263,
  -0.0025234426,
   0.0076375654,
    0.019855931,
    0.033557222,
    0.048001634,
    0.062336497,
    0.075662948,
    0.087109104,
    0.095901874,
     0.10143605,
     0.10333491,
     0.10143605,
    0.095901874,
    0.087109104,
    0.075662948,
    0.062336497,
    0.048001634,
    0.033557222,
    0.019855931,
   0.0076375654,
  -0.0025234426,
   -0.010253263,
   -0.015393401,
   -0.017996533,
   -0.018301826,
    -0.01669712,
   -0.013668084,
  -0.0097488405,
  -0.0054642152,
  -0.0012898644,
   0.0023882104,
   0.0052959804,
    0.007277045,
   0.0082949352,
    0.008414395,
   0.0077790286,
    0.006582916,
    0.005044567,
   0.0033764437,
   0.0017654549,
  0.00035617931,
 -0.00075521572,
  -0.0015246954,
  -0.0019538899,
  -0.0020817198,
  -0.0019708148,
  -0.0016964002,
   -0.001333873,
 -0.00095069429,
 -0.00088970285
};

// bit sync half distance table
// index any position 0 to 19 and it returns a position halfway from the index
const int HALF_TBL[20] = {
    9,	// 0
   10,	// 1
   11,	// 2
   12,	// 3
   13,	// 4
   14,	// 5
   15,	// 6
   16,	// 7
   17,	// 8
   18,	// 9
   19,  // 0,	// 10
    0,  //
    1,	// 11

    2,	// 12
    3,	// 13
    4,	// 14
    5,	// 15
    6,	// 16
    7,	// 17
    8,	// 18
//    9,	// 19
};

