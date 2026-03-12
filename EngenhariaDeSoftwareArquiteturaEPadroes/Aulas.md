# Engenharia de Software: Arquitetura e Padrões
## Livros recomendados
- Fundamentos da Arquitetura de Software
- Criando Microsservicos
- Migrando Sistemas monolíticos para microsservicos
- Building real-time analytics Systems
- Arquitetura de software: A parte difícil
- Tidy First?


## Aula 2
Tudo em design é um Trade-off, uma escolha.
Aspectos a se considerar:
 - Conhecimento do time 
 - Pressão do negócio (orcamento, deadlines)
 - etc

 A divida técnica surge pois times buscam fazer tudo o possível para realizar uma entrega. É impossível eliminar as dívidas técnicas. Existem formas de mitigar as dívidas, mas elas sempre acabam surgindo.

### Arquitetura e Design
A arquitetura foca em alcancar os objetivos de negocio, qualidade e atender às restricões do sistema e tecnologias.
Uma boa arquitetura orienta o desenvolvimento, manutencao/evolucão e implantacão de sistemas de software de forma efetiva.

### O que é arquitetura?
Precisamos ter uma visão multifacetada. São vários os aspectos de um sistema que precisam ser arquiteturados, e isso vai depender da complexidade do sistema.

### Visão de um Arquiteto como Papel
Um arquiteto deve ter uma visão geral de vários projetos e tecnologias e como elas são aplicadas. O arquiteto deve ter uma visão também de gestão e mentoria para com o restante do time.


## Aula 3
### Problemas no processo
Requsitos geram: **Análise -> Design** -> Codificar -> Testar
As porcoes em negrito representam a arquitetura e design.

DORA metrics measure things like lead times.

### Coesão e acoplamento
Coesão representa a pouca responsabilidade de componentes em um sistemas. Single responsability principle.
Acoplamento representa a dependência de um componente com outros em um sistema. Open-Close principle.

### Big Ball of Mud
O code smell Big Ball of Mud mede o quão acoplado estão os servicos em uma aplicacao. Quanto mais acopladas as estruturas estão entre si, mais ligadas elas se tornam, tal que quando representadas graficamente suas relacoes parecem um emaranhado de fios.
### Questões chave na arquitetura
- Decomposicão: Fragmentacao de um software em partes menores e logicas.
- Componentes: Unidade coesa de software que fornece conjuntos de funcoes e servicos.
- Estruturas: Qualquer parte do software desenvolvido e testado, reutilizado em diversos projetos.
- Padroes: Construcao reutilizavel, abstraida da experiencia dos projetistas.
- Camadas: Padrao para decomposicao (baseada em reesponsabilidades/niveis e reutilizacao). Layers e Tiers.

### Estilos Arquiteturais: Model-View-Controller
A ideia do MVC é separar a visualizacão (view), a lógica de negócio (Controller) e os dados (Model).

### Repository Architecture (Micro Kernel)
Solucao baseada em plugins. O Kernel (nucleo) se conecta com diversos plugins.
