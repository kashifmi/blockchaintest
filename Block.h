#ifndef TESTCHAIN_BLOCK_H
#define TESTCHAIN_BLOCK_H

#include <cstdint> 
#include <iostream> 
#include <string> 

class Block{
    private: 
        uint32_t _nIndex; 
        int64_t _nNonce;
        std::string _sData; 
        std::string _sHash; 
        time_t _tTime;
        std::string _calculateHash() const;  
    public: 
        Block(uint32_t nIndexIn, const std::string& sDataIn);
        std::string sPrevHash; 
        std::string getHash(); 
        void mineBlock(uint32_t nDifficulty);
};

#endif