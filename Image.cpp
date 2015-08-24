#include "Image.h"

Image::Image(const Image &img){
	m_width = img.m_width;               
	m_height = img.m_height;             
	m_channels = img.m_channels;            
	m_depth = img.m_depth;               
	m_data = img.m_data;     
}
Image::~Image(){
	if(m_data!=NULL){
		delete [] m_data;
	}
}
