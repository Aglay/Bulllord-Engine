#pragma once
#include "BMGHeader.h"

//!param header
//!��Ҫ��дnumberOfArrayElements , numberOfMipmapLevels
//!1D��Cube������Ҫ��дpixelWidth��2D������Ҫ��дpixelHeight��3D������Ҫ��дpixelDepth

//!param data
//!��Ҫ��дCompressData

//!param tt
//!ָ����������

//!param at
//!���������ͼƬû��alphaͨ��������alphaͨ��Ϊ0��255 at��дAT_SAMPLE_ALPHA �� ������дAT_COMPLEX_ALPHA

//!param filename
//!�ļ��洢��

//!����֮��Ҫ�Լ��ͷ�Data_block�е�CompressData
bool CompressKTX(BMG_header_TT& header, Data_block& data , std::vector<SpriteSheet> ssv, Texture_target tt , Alpha_type at , const char* filename,CompressMethord cm);

//!param filename
//!ktx����·��

//!prama data;
//!dataΪ����ֵ
//!headerΪ����ֵ
//!ttΪ����ֵ
bool UnCompressKTX(const char* filename , Data_block& data , std::vector<SpriteSheet>& ssv, BMG_header_TT& header, Texture_target& tt);

void encode_s3tc(const BMG_header_TT& header , Data_block& data , Texture_target tt, int at);
void decode_s3tc(BMG_header_TT& header,Data_block& data,Texture_target& tt, int at);

void encode_etc2(const BMG_header_TT& header , Data_block& data , Texture_target tt, int at);
void decode_etc2(BMG_header_TT& header,Data_block& data,Texture_target& tt, int at);

void encode_astc( const BMG_header_TT& header , Data_block& data , Texture_target tt , int at );
void decode_astc( BMG_header_TT& header,Data_block& data,Texture_target& tt, int at);


void encode_bmg(const BMG_header_TT& header, Data_block& data, Texture_target tt, int at);
void decode_bmg(BMG_header_TT& header, Data_block& data, Texture_target& tt, int at);

void startup();




