#ifndef NATIVE_CLIENT_KENLM_BEAM_STATE_H
#define NATIVE_CLIENT_KENLM_BEAM_STATE_H

typedef lm::ngram::ProbingModel Model;

struct KenLMBeamState {
    float language_model_score;
    float score;
    float delta_score;
    int num_words;
    std::vector<float> prev_word_probs;
    std::vector<std::string> prev_words;
    std::string incomplete_word;
    TrieNode *incomplete_word_trie_node;
    Model::State model_state;
};

#endif //NATIVE_CLIENT_KENLM_BEAM_STATE_H