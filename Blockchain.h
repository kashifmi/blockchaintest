#ifndef TESTCHAIN_BLOCKCHAIN_H
#define TESTCHAIN_BLOCKCHAIN_H 

#include <cstdint> 
#include <vector> 
#include 'Block.h'

class Blockchain {
    private: 
        uint32_t _nDifficulty; 
        vector<Block> _vChain; 
        Block _getLastBlock() const; 
    public: 
        Blockchain(); 
        void addBlock(Block bNew); 
}

#endif