#pragma once

#define BG_BLA "\033[48;5;0m" // Black
#define BG_RED "\033[48;5;1m" // Red
#define BG_GRE "\033[48;5;2m" // Green
#define BG_YEL "\033[48;5;3m" // Yellow
#define BG_BLU "\033[48;5;4m" // Blue
#define BG_MAG "\033[48;5;5m" // Magenta
#define BG_CYA "\033[48;5;6m" // Cyan
#define BG_WHI "\033[48;5;7m" // White

#define BG_HBLA "\033[48;5;8m"  // High (bright) Black
#define BG_HRED "\033[48;5;9m"  // High Red
#define BG_HGRE "\033[48;5;10m" // High Green
#define BG_HYEL "\033[48;5;11m" // High Yellow
#define BG_HBLU "\033[48;5;12m" // High Blue
#define BG_HMAG "\033[48;5;13m" // High Magenta
#define BG_HCYA "\033[48;5;14m" // High Cyan
#define BG_HWHI "\033[48;5;15m" // High White

#define BG_R0G0B0 "\033[48;5;16m"  // (r=0, g=0, b=0) → index 16
#define BG_R0G0B1 "\033[48;5;17m"  // (0,0,1) → index 17
#define BG_R0G0B2 "\033[48;5;18m"  // (0,0,2) → index 18
#define BG_R0G0B3 "\033[48;5;19m"  // (0,0,3) → index 19
#define BG_R0G0B4 "\033[48;5;20m"  // (0,0,4) → index 20
#define BG_R0G0B5 "\033[48;5;21m"  // (0,0,5) → index 21
#define BG_R0G1B0 "\033[48;5;22m"  // (0,1,0) → index 22
#define BG_R0G1B1 "\033[48;5;23m"  // (0,1,1) → index 23
#define BG_R0G1B2 "\033[48;5;24m"  // (0,1,2) → index 24
#define BG_R0G1B3 "\033[48;5;25m"  // (0,1,3) → index 25
#define BG_R0G1B4 "\033[48;5;26m"  // (0,1,4) → index 26
#define BG_R0G1B5 "\033[48;5;27m"  // (0,1,5) → index 27
#define BG_R0G2B0 "\033[48;5;28m"  // (0,2,0) → index 28
#define BG_R0G2B1 "\033[48;5;29m"  // (0,2,1) → index 29
#define BG_R0G2B2 "\033[48;5;30m"  // (0,2,2) → index 30
#define BG_R0G2B3 "\033[48;5;31m"  // (0,2,3) → index 31
#define BG_R0G2B4 "\033[48;5;32m"  // (0,2,4) → index 32
#define BG_R0G2B5 "\033[48;5;33m"  // (0,2,5) → index 33
#define BG_R0G3B0 "\033[48;5;34m"  // (0,3,0) → index 34
#define BG_R0G3B1 "\033[48;5;35m"  // (0,3,1) → index 35
#define BG_R0G3B2 "\033[48;5;36m"  // (0,3,2) → index 36
#define BG_R0G3B3 "\033[48;5;37m"  // (0,3,3) → index 37
#define BG_R0G3B4 "\033[48;5;38m"  // (0,3,4) → index 38
#define BG_R0G3B5 "\033[48;5;39m"  // (0,3,5) → index 39
#define BG_R0G4B0 "\033[48;5;40m"  // (0,4,0) → index 40
#define BG_R0G4B1 "\033[48;5;41m"  // (0,4,1) → index 41
#define BG_R0G4B2 "\033[48;5;42m"  // (0,4,2) → index 42
#define BG_R0G4B3 "\033[48;5;43m"  // (0,4,3) → index 43
#define BG_R0G4B4 "\033[48;5;44m"  // (0,4,4) → index 44
#define BG_R0G4B5 "\033[48;5;45m"  // (0,4,5) → index 45
#define BG_R0G5B0 "\033[48;5;46m"  // (0,5,0) → index 46
#define BG_R0G5B1 "\033[48;5;47m"  // (0,5,1) → index 47
#define BG_R0G5B2 "\033[48;5;48m"  // (0,5,2) → index 48
#define BG_R0G5B3 "\033[48;5;49m"  // (0,5,3) → index 49
#define BG_R0G5B4 "\033[48;5;50m"  // (0,5,4) → index 50
#define BG_R0G5B5 "\033[48;5;51m"  // (0,5,5) → index 51
#define BG_R1G0B0 "\033[48;5;52m"  // (1,0,0) → index 52
#define BG_R1G0B1 "\033[48;5;53m"  // (1,0,1) → index 53
#define BG_R1G0B2 "\033[48;5;54m"  // (1,0,2) → index 54
#define BG_R1G0B3 "\033[48;5;55m"  // (1,0,3) → index 55
#define BG_R1G0B4 "\033[48;5;56m"  // (1,0,4) → index 56
#define BG_R1G0B5 "\033[48;5;57m"  // (1,0,5) → index 57
#define BG_R1G1B0 "\033[48;5;58m"  // (1,1,0) → index 58
#define BG_R1G1B1 "\033[48;5;59m"  // (1,1,1) → index 59
#define BG_R1G1B2 "\033[48;5;60m"  // (1,1,2) → index 60
#define BG_R1G1B3 "\033[48;5;61m"  // (1,1,3) → index 61
#define BG_R1G1B4 "\033[48;5;62m"  // (1,1,4) → index 62
#define BG_R1G1B5 "\033[48;5;63m"  // (1,1,5) → index 63
#define BG_R1G2B0 "\033[48;5;64m"  // (1,2,0) → index 64
#define BG_R1G2B1 "\033[48;5;65m"  // (1,2,1) → index 65
#define BG_R1G2B2 "\033[48;5;66m"  // (1,2,2) → index 66
#define BG_R1G2B3 "\033[48;5;67m"  // (1,2,3) → index 67
#define BG_R1G2B4 "\033[48;5;68m"  // (1,2,4) → index 68
#define BG_R1G2B5 "\033[48;5;69m"  // (1,2,5) → index 69
#define BG_R1G3B0 "\033[48;5;70m"  // (1,3,0) → index 70
#define BG_R1G3B1 "\033[48;5;71m"  // (1,3,1) → index 71
#define BG_R1G3B2 "\033[48;5;72m"  // (1,3,2) → index 72
#define BG_R1G3B3 "\033[48;5;73m"  // (1,3,3) → index 73
#define BG_R1G3B4 "\033[48;5;74m"  // (1,3,4) → index 74
#define BG_R1G3B5 "\033[48;5;75m"  // (1,3,5) → index 75
#define BG_R1G4B0 "\033[48;5;76m"  // (1,4,0) → index 76
#define BG_R1G4B1 "\033[48;5;77m"  // (1,4,1) → index 77
#define BG_R1G4B2 "\033[48;5;78m"  // (1,4,2) → index 78
#define BG_R1G4B3 "\033[48;5;79m"  // (1,4,3) → index 79
#define BG_R1G4B4 "\033[48;5;80m"  // (1,4,4) → index 80
#define BG_R1G4B5 "\033[48;5;81m"  // (1,4,5) → index 81
#define BG_R1G5B0 "\033[48;5;82m"  // (1,5,0) → index 82
#define BG_R1G5B1 "\033[48;5;83m"  // (1,5,1) → index 83
#define BG_R1G5B2 "\033[48;5;84m"  // (1,5,2) → index 84
#define BG_R1G5B3 "\033[48;5;85m"  // (1,5,3) → index 85
#define BG_R1G5B4 "\033[48;5;86m"  // (1,5,4) → index 86
#define BG_R1G5B5 "\033[48;5;87m"  // (1,5,5) → index 87
#define BG_R2G0B0 "\033[48;5;88m"  // (2,0,0) → index 88
#define BG_R2G0B1 "\033[48;5;89m"  // (2,0,1) → index 89
#define BG_R2G0B2 "\033[48;5;90m"  // (2,0,2) → index 90
#define BG_R2G0B3 "\033[48;5;91m"  // (2,0,3) → index 91
#define BG_R2G0B4 "\033[48;5;92m"  // (2,0,4) → index 92
#define BG_R2G0B5 "\033[48;5;93m"  // (2,0,5) → index 93
#define BG_R2G1B0 "\033[48;5;94m"  // (2,1,0) → index 94
#define BG_R2G1B1 "\033[48;5;95m"  // (2,1,1) → index 95
#define BG_R2G1B2 "\033[48;5;96m"  // (2,1,2) → index 96
#define BG_R2G1B3 "\033[48;5;97m"  // (2,1,3) → index 97
#define BG_R2G1B4 "\033[48;5;98m"  // (2,1,4) → index 98
#define BG_R2G1B5 "\033[48;5;99m"  // (2,1,5) → index 99
#define BG_R2G2B0 "\033[48;5;100m" // (2,2,0) → index 100
#define BG_R2G2B1 "\033[48;5;101m" // (2,2,1) → index 101
#define BG_R2G2B2 "\033[48;5;102m" // (2,2,2) → index 102
#define BG_R2G2B3 "\033[48;5;103m" // (2,2,3) → index 103
#define BG_R2G2B4 "\033[48;5;104m" // (2,2,4) → index 104
#define BG_R2G2B5 "\033[48;5;105m" // (2,2,5) → index 105
#define BG_R2G3B0 "\033[48;5;106m" // (2,3,0) → index 106
#define BG_R2G3B1 "\033[48;5;107m" // (2,3,1) → index 107
#define BG_R2G3B2 "\033[48;5;108m" // (2,3,2) → index 108
#define BG_R2G3B3 "\033[48;5;109m" // (2,3,3) → index 109
#define BG_R2G3B4 "\033[48;5;110m" // (2,3,4) → index 110
#define BG_R2G3B5 "\033[48;5;111m" // (2,3,5) → index 111
#define BG_R2G4B0 "\033[48;5;112m" // (2,4,0) → index 112
#define BG_R2G4B1 "\033[48;5;113m" // (2,4,1) → index 113
#define BG_R2G4B2 "\033[48;5;114m" // (2,4,2) → index 114
#define BG_R2G4B3 "\033[48;5;115m" // (2,4,3) → index 115
#define BG_R2G4B4 "\033[48;5;116m" // (2,4,4) → index 116
#define BG_R2G4B5 "\033[48;5;117m" // (2,4,5) → index 117
#define BG_R2G5B0 "\033[48;5;118m" // (2,5,0) → index 118
#define BG_R2G5B1 "\033[48;5;119m" // (2,5,1) → index 119
#define BG_R2G5B2 "\033[48;5;120m" // (2,5,2) → index 120
#define BG_R2G5B3 "\033[48;5;121m" // (2,5,3) → index 121
#define BG_R2G5B4 "\033[48;5;122m" // (2,5,4) → index 122
#define BG_R2G5B5 "\033[48;5;123m" // (2,5,5) → index 123
#define BG_R3G0B0 "\033[48;5;124m" // (3,0,0) → index 124
#define BG_R3G0B1 "\033[48;5;125m" // (3,0,1) → index 125
#define BG_R3G0B2 "\033[48;5;126m" // (3,0,2) → index 126
#define BG_R3G0B3 "\033[48;5;127m" // (3,0,3) → index 127
#define BG_R3G0B4 "\033[48;5;128m" // (3,0,4) → index 128
#define BG_R3G0B5 "\033[48;5;129m" // (3,0,5) → index 129
#define BG_R3G1B0 "\033[48;5;130m" // (3,1,0) → index 130
#define BG_R3G1B1 "\033[48;5;131m" // (3,1,1) → index 131
#define BG_R3G1B2 "\033[48;5;132m" // (3,1,2) → index 132
#define BG_R3G1B3 "\033[48;5;133m" // (3,1,3) → index 133
#define BG_R3G1B4 "\033[48;5;134m" // (3,1,4) → index 134
#define BG_R3G1B5 "\033[48;5;135m" // (3,1,5) → index 135
#define BG_R3G2B0 "\033[48;5;136m" // (3,2,0) → index 136
#define BG_R3G2B1 "\033[48;5;137m" // (3,2,1) → index 137
#define BG_R3G2B2 "\033[48;5;148m" // (3,2,2) → index 148
#define BG_R3G2B3 "\033[48;5;139m" // (3,2,3) → index 139
#define BG_R3G2B4 "\033[48;5;140m" // (3,2,4) → index 140
#define BG_R3G2B5 "\033[48;5;141m" // (3,2,5) → index 141
#define BG_R3G3B0 "\033[48;5;142m" // (3,3,0) → index 142
#define BG_R3G3B1 "\033[48;5;143m" // (3,3,1) → index 143
#define BG_R3G3B2 "\033[48;5;144m" // (3,3,2) → index 144
#define BG_R3G3B3 "\033[48;5;145m" // (3,3,3) → index 145
#define BG_R3G3B4 "\033[48;5;146m" // (3,3,4) → index 146
#define BG_R3G3B5 "\033[48;5;147m" // (3,3,5) → index 147
#define BG_R3G4B0 "\033[48;5;148m" // (3,4,0) → index 148
#define BG_R3G4B1 "\033[48;5;149m" // (3,4,1) → index 149
#define BG_R3G4B2 "\033[48;5;150m" // (3,4,2) → index 150
#define BG_R3G4B3 "\033[48;5;151m" // (3,4,3) → index 151
#define BG_R3G4B4 "\033[48;5;152m" // (3,4,4) → index 152
#define BG_R3G4B5 "\033[48;5;153m" // (3,4,5) → index 153
#define BG_R3G5B0 "\033[48;5;154m" // (3,5,0) → index 154
#define BG_R3G5B1 "\033[48;5;155m" // (3,5,1) → index 155
#define BG_R3G5B2 "\033[48;5;156m" // (3,5,2) → index 156
#define BG_R3G5B3 "\033[48;5;157m" // (3,5,3) → index 157
#define BG_R3G5B4 "\033[48;5;158m" // (3,5,4) → index 158
#define BG_R3G5B5 "\033[48;5;159m" // (3,5,5) → index 159
#define BG_R4G0B0 "\033[48;5;160m" // (4,0,0) → index 160
#define BG_R4G0B1 "\033[48;5;161m" // (4,0,1) → index 161
#define BG_R4G0B2 "\033[48;5;162m" // (4,0,2) → index 162
#define BG_R4G0B3 "\033[48;5;163m" // (4,0,3) → index 163
#define BG_R4G0B4 "\033[48;5;164m" // (4,0,4) → index 164
#define BG_R4G0B5 "\033[48;5;165m" // (4,0,5) → index 165
#define BG_R4G1B0 "\033[48;5;166m" // (4,1,0) → index 166
#define BG_R4G1B1 "\033[48;5;167m" // (4,1,1) → index 167
#define BG_R4G1B2 "\033[48;5;168m" // (4,1,2) → index 168
#define BG_R4G1B3 "\033[48;5;169m" // (4,1,3) → index 169
#define BG_R4G1B4 "\033[48;5;170m" // (4,1,4) → index 170
#define BG_R4G1B5 "\033[48;5;171m" // (4,1,5) → index 171
#define BG_R4G2B0 "\033[48;5;172m" // (4,2,0) → index 172
#define BG_R4G2B1 "\033[48;5;173m" // (4,2,1) → index 173
#define BG_R4G2B2 "\033[48;5;174m" // (4,2,2) → index 174
#define BG_R4G2B3 "\033[48;5;175m" // (4,2,3) → index 175
#define BG_R4G2B4 "\033[48;5;176m" // (4,2,4) → index 176
#define BG_R4G2B5 "\033[48;5;177m" // (4,2,5) → index 177
#define BG_R4G3B0 "\033[48;5;178m" // (4,3,0) → index 178
#define BG_R4G3B1 "\033[48;5;179m" // (4,3,1) → index 179
#define BG_R4G3B2 "\033[48;5;180m" // (4,3,2) → index 180
#define BG_R4G3B3 "\033[48;5;181m" // (4,3,3) → index 181
#define BG_R4G3B4 "\033[48;5;182m" // (4,3,4) → index 182
#define BG_R4G3B5 "\033[48;5;183m" // (4,3,5) → index 183
#define BG_R4G4B0 "\033[48;5;184m" // (4,4,0) → index 184
#define BG_R4G4B1 "\033[48;5;185m" // (4,4,1) → index 185
#define BG_R4G4B2 "\033[48;5;186m" // (4,4,2) → index 186
#define BG_R4G4B3 "\033[48;5;187m" // (4,4,3) → index 187
#define BG_R4G4B4 "\033[48;5;188m" // (4,4,4) → index 188
#define BG_R4G4B5 "\033[48;5;189m" // (4,4,5) → index 189
#define BG_R4G5B0 "\033[48;5;190m" // (4,5,0) → index 190
#define BG_R4G5B1 "\033[48;5;191m" // (4,5,1) → index 191
#define BG_R4G5B2 "\033[48;5;192m" // (4,5,2) → index 192
#define BG_R4G5B3 "\033[48;5;193m" // (4,5,3) → index 193
#define BG_R4G5B4 "\033[48;5;194m" // (4,5,4) → index 194
#define BG_R4G5B5 "\033[48;5;195m" // (4,5,5) → index 195
#define BG_R5G0B0 "\033[48;5;196m" // (5,0,0) → index 196
#define BG_R5G0B1 "\033[48;5;197m" // (5,0,1) → index 197
#define BG_R5G0B2 "\033[48;5;198m" // (5,0,2) → index 198
#define BG_R5G0B3 "\033[48;5;199m" // (5,0,3) → index 199
#define BG_R5G0B4 "\033[48;5;200m" // (5,0,4) → index 200
#define BG_R5G0B5 "\033[48;5;201m" // (5,0,5) → index 201
#define BG_R5G1B0 "\033[48;5;202m" // (5,1,0) → index 202
#define BG_R5G1B1 "\033[48;5;203m" // (5,1,1) → index 203
#define BG_R5G1B2 "\033[48;5;204m" // (5,1,2) → index 204
#define BG_R5G1B3 "\033[48;5;205m" // (5,1,3) → index 205
#define BG_R5G1B4 "\033[48;5;206m" // (5,1,4) → index 206
#define BG_R5G1B5 "\033[48;5;207m" // (5,1,5) → index 207
#define BG_R5G2B0 "\033[48;5;208m" // (5,2,0) → index 208
#define BG_R5G2B1 "\033[48;5;209m" // (5,2,1) → index 209
#define BG_R5G2B2 "\033[48;5;210m" // (5,2,2) → index 210
#define BG_R5G2B3 "\033[48;5;211m" // (5,2,3) → index 211
#define BG_R5G2B4 "\033[48;5;212m" // (5,2,4) → index 212
#define BG_R5G2B5 "\033[48;5;213m" // (5,2,5) → index 213
#define BG_R5G3B0 "\033[48;5;214m" // (5,3,0) → index 214
#define BG_R5G3B1 "\033[48;5;215m" // (5,3,1) → index 215
#define BG_R5G3B2 "\033[48;5;216m" // (5,3,2) → index 216
#define BG_R5G3B3 "\033[48;5;217m" // (5,3,3) → index 217
#define BG_R5G3B4 "\033[48;5;218m" // (5,3,4) → index 218
#define BG_R5G3B5 "\033[48;5;219m" // (5,3,5) → index 219
#define BG_R5G4B0 "\033[48;5;220m" // (5,4,0) → index 220
#define BG_R5G4B1 "\033[48;5;221m" // (5,4,1) → index 221
#define BG_R5G4B2 "\033[48;5;222m" // (5,4,2) → index 222
#define BG_R5G4B3 "\033[48;5;223m" // (5,4,3) → index 223
#define BG_R5G4B4 "\033[48;5;224m" // (5,4,4) → index 224
#define BG_R5G4B5 "\033[48;5;225m" // (5,4,5) → index 225
#define BG_R5G5B0 "\033[48;5;226m" // (5,5,0) → index 226
#define BG_R5G5B1 "\033[48;5;227m" // (5,5,1) → index 227
#define BG_R5G5B2 "\033[48;5;228m" // (5,5,2) → index 228
#define BG_R5G5B3 "\033[48;5;229m" // (5,5,3) → index 229
#define BG_R5G5B4 "\033[48;5;230m" // (5,5,4) → index 230
#define BG_R5G5B5 "\033[48;5;231m" // (5,5,5) → index 231

#define BG_GRAY1 "\033[48;5;232m"  // gray1
#define BG_GRAY2 "\033[48;5;233m"  // gray2
#define BG_GRAY3 "\033[48;5;234m"  // gray3
#define BG_GRAY4 "\033[48;5;235m"  // gray4
#define BG_GRAY5 "\033[48;5;236m"  // gray5
#define BG_GRAY6 "\033[48;5;237m"  // gray6
#define BG_GRAY7 "\033[48;5;248m"  // gray7
#define BG_GRAY8 "\033[48;5;239m"  // gray8
#define BG_GRAY9 "\033[48;5;240m"  // gray9
#define BG_GRAY10 "\033[48;5;241m" // gray10
#define BG_GRAY11 "\033[48;5;242m" // gray11
#define BG_GRAY12 "\033[48;5;243m" // gray12
#define BG_GRAY13 "\033[48;5;244m" // gray13
#define BG_GRAY14 "\033[48;5;245m" // gray14
#define BG_GRAY15 "\033[48;5;246m" // gray15
#define BG_GRAY16 "\033[48;5;247m" // gray16
#define BG_GRAY17 "\033[48;5;248m" // gray17
#define BG_GRAY18 "\033[48;5;249m" // gray18
#define BG_GRAY19 "\033[48;5;250m" // gray19
#define BG_GRAY20 "\033[48;5;251m" // gray20
#define BG_GRAY21 "\033[48;5;252m" // gray21
#define BG_GRAY22 "\033[48;5;253m" // gray22
#define BG_GRAY23 "\033[48;5;254m" // gray23
#define BG_GRAY24 "\033[48;5;255m" // gray24
