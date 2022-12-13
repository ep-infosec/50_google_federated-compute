/*
 * Copyright 2018 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "fcp/secagg/testing/ecdh_pregenerated_test_keys.h"

#include <string>
#include <vector>

#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "fcp/secagg/shared/ecdh_key_agreement.h"
#include "fcp/secagg/shared/ecdh_keys.h"

namespace fcp {
namespace secagg {

constexpr int EcdhPregeneratedTestKeys::kNumTestEcdhKeys;

EcdhPregeneratedTestKeys::EcdhPregeneratedTestKeys() {
  // These were generated by EcdhKeyAgreement::CreateFromRandomKeys.
  // Despite the odd line wrapping, there are 8 individual strings in each
  // vector.
  private_key_strings_ = {
      "\x6\x8D\xCC\xDD\x96Sv\x1Ams\xED\x83\x86\xB0vW\xB2"
      "9,\xEA\xBE\x1C\xAD\xEF\x8E\xC6\xC1\xEE\xD5@\xC1\x98",
      "\x99\xB7\x18\x91\x8E\xC1\xD5=\x86\xDB\xF0\x1D"
      "4\x9D\xFD\xDC\xE6\xCC\xBB`=\x94iO\xBBU<x'%\xF9\x99",
      "V\xA2"
      "fLD\xA8"
      "a\xA8\xCD"
      "B\x93N\xF1|\xE7:\xDB U&g\\\xAA\xD8'P\xEF\x8F\xA5\xF8"
      "do",
      "R\xAB\xCF\x11\xC6\xA1P@\xD5VS}C\x3\xD2\x1\xC8\x8A\x96\x10Z\xF8"
      "C\x1\xA0\xD2\x9C\xB6\xF9\x6\n\xEF",
      "\x8A\xFCxv\x95\xB5n\xA3v{\xD4\x9F"
      "6\x89^@\xB0Oa\xB3\x8B"
      "C\xB0\x2\xA5\xD7\xE9\x14\x8DXf1",
      "\xF4\xDD\xAF\x19"
      "D\xCBi\x94\x8F\x9C\xEAq\xFWXE\xE0\xFA\xF2\x8B[\xCD \xE4"
      "Aa;\x9A\x8E}\xA0\x85",
      "pC\x18\xDD\xFW\xDF\xA0\n\v9\xBB\xE8\xCAU\x1D\xCA\x93"
      "B\xA2\x12-\x9DoJju\xDB\x9FVD\xD6",
      "\xF0\xD4\x99\xB7\xBE\x1B\xC3QMU\x99\xE1\xA1"
      "f\xF2X\x13\xAC\xB4\x96"
      "2)=U\xE6\xEC#\xCE\xA5y\xCE\x9B"};
  public_key_strings_ = {
      "\x2^\x8D\x95\xEmW\xA4\x99y\x19ZT\x87;\xC1.R\xC3_r\xAE"
      "1=nh\xD2\x82xZ\xC9L\x83",
      "\x3S\xD3zo\xB5.\xB3"
      "3f\x94\x14\xAE\xC3,\xC3\xB9r,\xB3\\\xE8\xBD\x8E\xF2\t\xEB\x1\f\xE1\x83"
      "9\xED",
      "\x2 \xB3-\xC4\x1\x8D\x9A"
      "BM\x98W\xB3=Y\x1\xEA\x80WGS&r\x1A\x12\xE0z\x9EzC:\xCA\x9D",
      "\x2"
      "3\xCBn\x5\x5\xBC\xB5\x6y\x13h\xD5\x14\xA8\x19L\xCBG/"
      "N\x12\xEA\x98\xA7\xA2/\xE4\x5\xCD\xC2\xE1\xC1",
      "\x2\x1C"
      "C\x85\xE3\xFF\x1B\xA8\xF1\xE7\xF2\xF9\x8C(\x85\x1CZ\xC9\xFB\xE3.\x8D "
      "'\xB5\xCC"
      "A\x12\x19\x80\xED)\xD3",
      "\x3\xF3\xB6h\t\xB3\x80\xD0%\xCD> "
      "'\xA2\xFBz\xA5\xB5K\x94\xE5==\t\aIt\xCD\x98'\x1"
      "5)",
      "\x2"
      "4\xFF\xA5\xA2\x1B\xF1!q\xBEH\xEB\xE7*\xD8\xBF\x87(!\xBDM "
      "(\xC1mK\xC2\xB8\xDA\xAB"
      "al\x8E",
      "\x3Jr+~\x19kht\xE1\xD7\x10\x9B\xB9\xAD}U\xB2\xE4\xF1\x89%\xCF"
      "b\xAA\n\x83"
      "5\x8B"
      "7G\xA3\xF2"};

  // These were generated by a Java ECDH implementation. They do not correspond
  // to the private keys, and have X.509 headers.
  uncompressed_public_key_strings_ = {
      "0Y0\023\006\a*\206H\316=\002\001\006\b*\206H\316="
      "\003\001\a\003B\000\004Pv\301\226\312Y\326\323I\271\265\310Vj\353\236"
      "\336}\230a\265\312:kh\315\365\270nW\332\271$\v\b\277%"
      "\246\375d\361H\274\343q\362\254\235\252\220\204a\303\222\020\234\000\372"
      "\332]%p3\006",
      "0Y0\023\006\a*\206H\316=\002\001\006\b*\206H\316="
      "\003\001\a\003B\000\004\221f\267\002lX?\325\261\353\\\3430U\365["
      "\005\222\214ey\300s`"
      "F\\\251\370\t\310\310\n4\375\005\324\360\316\377\025\320\341\363e]4["
      "\317??\276\227\"p\353\314\377\260\213\024\300\003\250\253",
      "0Y0\023\006\a*\206H\316=\002\001\006\b*\206H\316="
      "\003\001\a\003B\000\004\256\000g\0247\365!<$"
      "\234eYA\323u\341\346x\350\271=F\220n\257\201\210\034z0\315s\221="
      "\357\226\'%O\342\270\346\035\277\2465\223\036^H+"
      "Q\246mAZ\021cf\000\016\221\350c",
      "0Y0\023\006\a*\206H\316=\002\001\006\b*\206H\316="
      "\003\001\a\003B\000\004\034\230\204\000y\022e\226\330\3547\346\212~5Z-"
      "0\2342)\315\'B\271\235\226R~\252]\256\305\353$%"
      "Sq\376\337\254Z\022\213eH%!\225\271-,/\227s\263!J3Ln\3503,",
      "0Y0\023\006\a*\206H\316=\002\001\006\b*\206H\316="
      "\003\001\a\003B\000\004u\273R8\212\335\302c\341\237\373\"\270\350UL\342R"
      "\330]l\272C\346[\312\240\fl\207[\201\241\022\a\035? !\210 "
      "l\264\241H}2*\004<E\034n\367!8\226Z\263p\214\tY@",
      "0Y0\023\006\a*\206H\316=\002\001\006\b*\206H\316="
      "\003\001\a\003B\000\004\375\211:E5j\373\357\257\276|"
      "\023\003\a\214\2751\200n\374\306\300\313\266EL\306\364Vq\205\000\031R6"
      "\357I2\253r\024j\235\264^\340_\363\225*\306?"
      "\352\270\017\371\351EN\362K8\020\244",
      "0Y0\023\006\a*\206H\316=\002\001\006\b*\206H\316="
      "\003\001\a\003B\000\004\322\333\350*"
      "3\016\246D\t\177\226GL\332\356\336\365k\303\331?H\020\235\235\206\373*"
      "\322c\006\206\030\200k\363\233]\231\260=\363\003\2221\337:\021E?"
      "ra\370\026\340\267\"5\n\317\vN\375\235",
      "0Y0\023\006\a*\206H\316=\002\001\006\b*\206H\316="
      "\003\001\a\003B\000\004\224\326\324\2577{z\364sTf\321YD\317\177QR\034}"
      "\030\241\211\026\366\255\256t\352\322\363\027\201\031F\026\260\3706h\330"
      "\026\022\\\022\'\255Y!\321a\324c\324\337\276\256?\002\235 \2636\034"};

  for (int i = 0; i < kNumTestEcdhKeys; ++i) {
    private_keys_.push_back(EcdhPrivateKey(
        reinterpret_cast<const uint8_t*>(private_key_strings_[i])));
    public_keys_.push_back(EcdhPublicKey(
        reinterpret_cast<const uint8_t*>(public_key_strings_[i])));
    // Move pointer ahead 26 bytes to skip header
    uncompressed_public_keys_.push_back(EcdhPublicKey(
        reinterpret_cast<const uint8_t*>(uncompressed_public_key_strings_[i] +
                                         26),
        EcdhPublicKey::kUncompressed));
  }
}

EcdhPrivateKey EcdhPregeneratedTestKeys::GetPrivateKey(size_t index) {
  EXPECT_THAT(index, testing::Lt(kNumTestEcdhKeys));
  return private_keys_[index];
}
EcdhPublicKey EcdhPregeneratedTestKeys::GetPublicKey(size_t index) {
  EXPECT_THAT(index, testing::Lt(kNumTestEcdhKeys));
  return public_keys_[index];
}
EcdhPublicKey EcdhPregeneratedTestKeys::GetUncompressedPublicKey(size_t index) {
  EXPECT_THAT(index, testing::Lt(kNumTestEcdhKeys));
  return uncompressed_public_keys_[index];
}

std::string EcdhPregeneratedTestKeys::GetPrivateKeyString(size_t index) {
  EXPECT_THAT(index, testing::Lt(kNumTestEcdhKeys));
  return std::string(private_key_strings_[index], EcdhPrivateKey::kSize);
}
std::string EcdhPregeneratedTestKeys::GetPublicKeyString(size_t index) {
  EXPECT_THAT(index, testing::Lt(kNumTestEcdhKeys));
  return std::string(public_key_strings_[index], EcdhPublicKey::kSize);
}
std::string EcdhPregeneratedTestKeys::GetUncompressedPublicKeyString(
    size_t index) {
  EXPECT_THAT(index, testing::Lt(kNumTestEcdhKeys));
  return std::string(public_key_strings_[index], EcdhPublicKey::kSize);
}

}  // namespace secagg
}  // namespace fcp
