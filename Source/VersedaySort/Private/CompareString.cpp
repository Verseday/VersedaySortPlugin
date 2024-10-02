// Copyright 2024 Verseday, All Rights Reserved.

#include "CompareString.h"

bool UVersedayCompareString::Less_StrStr(const FString& A, const FString& B) {
	return FCString::Strcmp(*A, *B) < 0;
}

bool UVersedayCompareString::Less_StriStri(const FString& A, const FString& B) {
	return FCString::Stricmp(*A, *B) < 0;
}

bool UVersedayCompareString::LessEqual_StrStr(const FString& A,
                                              const FString& B) {
	return FCString::Strcmp(*A, *B) <= 0;
}

bool UVersedayCompareString::LessEqual_StriStri(const FString& A,
                                                const FString& B) {
	return FCString::Stricmp(*A, *B) <= 0;
}

bool UVersedayCompareString::Greater_StrStr(const FString& A,
                                            const FString& B) {
	return FCString::Strcmp(*A, *B) > 0;
}

bool UVersedayCompareString::Greater_StriStri(const FString& A,
                                              const FString& B) {
	return FCString::Stricmp(*A, *B) > 0;
}

bool UVersedayCompareString::GreaterEqual_StrStr(const FString& A,
                                                 const FString& B) {
	return FCString::Strcmp(*A, *B) >= 0;
}

bool UVersedayCompareString::GreaterEqual_StriStri(const FString& A,
                                                   const FString& B) {
	return FCString::Stricmp(*A, *B) >= 0;
}
