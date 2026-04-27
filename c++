```mermaid
classDiagram

class Equipamento {
    -string tag
    -string descricao
    -bool ativo

    +Equipamento(tag: string, descricao: string, ativo: bool)
    +ligar() void
    +desligar() void
    +getTag() string
    +estaAtivo() bool
    +exibirResumo() void
}

class SensorTemperatura {
    -double valorAtual

    +SensorTemperatura(tag: string, descricao: string, ativo: bool, valorInicial: double)
    +atualizarLeitura(novoValor: double) void
    +getValorAtual() double
    +exibirResumo() void
}

Equipamento <|-- SensorTemperatura
